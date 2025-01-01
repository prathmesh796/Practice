type user = {
    props: {
        name: string;
        age: number;
    }
}

function loguser(user: user) {
    return user.props.name;
}