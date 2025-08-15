// This code demonstrates the use of the Pick utility type in TypeScript.
// It allows you to create a new type by picking specific properties from an existing type.

interface User {
    id: number;
    name: string;
    email: string;
    age: number;
}

type UserProfile = Pick<User, 'id' | 'name'>;

const display = (user: UserProfile) => {
    console.log(`User ID: ${user.id}, User Name: ${user.name}`);
}