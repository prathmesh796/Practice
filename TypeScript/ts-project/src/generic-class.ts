class Pair<keytype, valuetype> {
    key: keytype;
    value: valuetype;

    constructor(key: keytype, value: valuetype) {
        this.key = key;
        this.value = value;
    }
}

const pair1 = new Pair<string, number>('age', 20);
const pair2 = new Pair<number, string>(20, 'age');

console.log(pair1);
console.log(pair2);