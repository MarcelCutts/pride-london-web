open Jest;

describe("Title component", () => {
    open Expect;
    let title = "The Voice of Pride London";
    let subtitle = "Lorem ipsum dolor sit amet, consectetur adipiscing elit";

    test("renders a title", () => {
        let component = (<Banner title=title subtitle=subtitle/> |> Enzyme.shallow);
        let renderedTitle = component |> Enzyme.find("h1");

        expect(renderedTitle |> Enzyme.text) |> toEqual("The Voice of Pride London");
    });

    test("renders a subtitle", () => {
        let component = (<Title title="Pride" subtitle="Lorem ipsum dolor sit amet, consectetur adipiscing elit"/> |> Enzyme.shallow);
        let renderedSubTitle = component |> Enzyme.find("h3");

        expect(renderedSubTitle |> Enzyme.text) |> toEqual("Lorem ipsum dolor sit amet, consectetur adipiscing elit");
    });
})