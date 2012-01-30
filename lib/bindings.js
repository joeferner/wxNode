'use strict';

global.__superWrapMethod = function(origMethod, superMethod) {
  return function() {
    var tmp = this._super;
    this._super = superMethod;
    var ret = origMethod.apply(this, arguments);
    this._super = tmp;

    return ret;
  };
};

module.exports = require("../build/Release/wxnode_bindings");
