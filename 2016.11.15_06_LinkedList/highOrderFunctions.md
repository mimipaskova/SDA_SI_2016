Example with high order functions in JS

```js
var a = [1,2,3,4];

a.map(function(el) {return el *4;
});


function calculator(f, a, b) {
  return f(a,b);
}

function plus(a, b) {
  return a + b;
}

calculator(plus, 5,7)

calculator(
  function(a,b) {
    return a*b;
  }, 5, 8)
```


More...
[https://github.com/Andreshk/FunctionalLists](https://github.com/Andreshk/FunctionalLists)
