function printLength<T extends { length: number }>(arg: T): T {
  console.log(arg.length);
  return arg;
}

printLength('Hello, world!');