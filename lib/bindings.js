
module.exports = require("../build/Release/wxnode_bindings");

for(var k in module.exports) {
  module.exports[k].extend = Class.extend;
}

