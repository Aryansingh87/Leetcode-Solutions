/**
 * @return {Generator<number>}
 */
var fibGenerator = function*() {
    
};

/**
 * const gen = fibGenerator();
 * gen.next().value; // 0
 * gen.next().value; // 1
 */
 var fibGenerator = function*() {

  let current = 0; 
  let next = 1;

  while (true) {
    yield current; 

    [current, next] = [next, current + next];
    }
};
