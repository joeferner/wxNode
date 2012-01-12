import Options, Utils
from os import unlink, symlink, chdir, environ
from os.path import exists
import  subprocess as sub

def set_options(opt):
  opt.tool_options("compiler_cxx")

def configure(conf):
  conf.check_tool("compiler_cxx")
  conf.check_tool("node_addon")

  p = sub.Popen(['wx-config', '--cxxflags'], stdout=sub.PIPE, stderr=sub.STDOUT)
  cxxflags = p.stdout.read().rstrip('\n\r').split(' ')
  p = sub.Popen(['wx-config', '--libs'], stdout=sub.PIPE, stderr=sub.STDOUT)
  linkflags = p.stdout.read().rstrip('\n\r').split(' ')

  # Enables all the warnings that are easy to avoid
  conf.env.append_unique('CXXFLAGS', ["-Wall"])
  conf.env.append_unique('CXXFLAGS', ['-Isrc/'])
  conf.env.append_unique('CXXFLAGS', ['-g'])
  conf.env.append_unique('CXXFLAGS', ['-D_FILE_OFFSET_BITS=64'])
  conf.env.append_unique('CXXFLAGS', ['-D_LARGEFILE_SOURCE'])

  conf.env.append_unique('CXXFLAGS', cxxflags)
  conf.env.append_unique('LINKFLAGS', linkflags)

def build(bld):
  obj = bld.new_task_gen("cxx", "shlib", "node_addon")
  obj.target = "wxnode_bindings"
  obj.source = "src/wxnode_bindings.cpp src/app.cpp"
  obj.includes = "src/"
