# Pride in London Web Platform

This project is a community effort to release a brand new web platform to supplant and improve upon the product currently available at prideinlondon.org

## Getting started
This two core components of this project are [React](https://reactjs.org/) and the [ReasonML](https://reasonml.github.io/) programming language. 

React is a popular user interface library that lets you render components into your browser. ReasonML is a programming language that uses the OCaml compiler and Bucklescript to generate JavaScript. This is similar to other populer compile-to-JavaScript routes like Babel or TypeScript.

### Let's run the application
To get a development environment started on your local machine.
1. Pull the repo
1. Ensure you have [yarn](https://yarnpkg.com/en/docs/install) installed.
1. Run `yarn` in the root directory to pull in dependencies.
1. Run `yarn start` - this will launch the compiler and generate JavaScript.
1. Run `yarn serve` - this will serve your code to the browser.

Serving is done by [parcel](https://parceljs.org/), which bundles the JavaScript into one file and starts a hot reloading dev server at `http://localhost:1234` for you to see the application at.

The key thing to remember is, 🌟**the compiler is your friend**🌟. Should any errors occur in your code - the compiler will let you know.

### Let's make changes

When programming in ReasonML you will not have to touch the JavaScript itself, you will likely only need to touch the ReasonML files - those files ending in `.re`. As you update the ReasonML files, the lightning fast compiler will generate JavaScript, then bundled by Parcel and served to you. 

### Let's do testing
We use the popular [Jest](https://facebook.github.io/jest/) and [Enzyme](http://airbnb.io/enzyme/) libraries to help us test our application. Jest is a test runner, expectation library and more, and Enzyme allows us to easily render our React components in isolation.

#### 🔥 Hot Tip 🔥
Take advantage of the bananas good compiler errors by keeping the parcel terminal visible while you code. Any errors will be quickly highlighted for you to correct.

## Sponsors
The hosting and continuous deployment is graciously provided by [ZEIT](https://zeit.co).
