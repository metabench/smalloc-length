var smalloc = require('smalloc');
var smalloc_length = require('./build/release/smalloc-length.node');

var a = smalloc.alloc(1024, smalloc.Types.Float);


var a_size = smalloc_length(a);

console.log('a_size', a_size);
