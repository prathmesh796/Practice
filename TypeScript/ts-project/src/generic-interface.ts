interface HTTPResponse<T> {
    data: T;
    status: number;
}

async function getJsonResponse<T>(url: string): Promise<HTTPResponse<T>> {
    const response = await fetch(url);
    const data = await response.json();
    return {
        data,
        status: response.status
    };
}

(async () => {
    const response = await getJsonResponse<{ name: string }>('https://jsonplaceholder.typicode.com/todos/1');
    console.log(response);
})();