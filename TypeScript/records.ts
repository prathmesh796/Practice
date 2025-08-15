interface Data {
    id: string,
    name: string,
}

// initally we have to use this syntax to do it:
// type DataRecord = { [key: string]: Data }

type DataRecord = Record<string, Data>;

const data: DataRecord = {
    '1': { id: '1', name: 'John Doe' },
    '2': { id: '2', name: 'Jane Smith' },
}