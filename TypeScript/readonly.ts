// When you have a configuartaion object that should not not be altered after initialtion, making it Readonly ensures its properties cannot be changed

interface Config {
    readonly endpoint: string,
    readonly apikey: string
}

const config: Readonly<Config> = {
    endpoint: 'https://api.example.com/',
    apikey: 'agrhajlkfhfskjharnhvljknb'
}