// In a function that can accept several types of inputs but you want to exclude some types, you can use the `Exclude` utility type.

type Events = 'click' | 'hover' | 'scroll' | 'keypress';
type ExcludedEvents = 'hover' | 'keypress';

const handleEvent = (event: Exclude<Events, ExcludedEvents>) => {
    switch (event) {
        case 'click':
            console.log('Handling click event');
            break;
        case 'scroll':
            console.log('Handling scroll event');
            break;
        // 'hover' and 'keypress' are excluded, so no need to handle them
        default:
            throw new Error(`Unhandled event: ${event}`);
    }
}