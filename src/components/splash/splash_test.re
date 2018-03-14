open Jest;

describe("Splash component", () => {
    open Expect;
    test("renders a pride header", () => {
        let component = (<Splash /> |> Enzyme.shallow);
        let renderedHeader = component |> Enzyme.find("h1");
        
        expect(renderedHeader |> Enzyme.text) |> toEqual("London Pride!");
    });
})