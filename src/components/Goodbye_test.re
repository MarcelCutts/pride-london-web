open Jest;

Enzyme.configureEnzyme(Enzyme.react_16_adapter());

describe("Goodbye component", () =>{
    open Expect;

    test("renders a message", () => {
        let name = "test";
        let component = (<Goodbye name /> |> Enzyme.shallow);
        let expectedResult = "Goodbye test";
        expect(component |> Enzyme.text) |> toEqual(expectedResult);
    })
});