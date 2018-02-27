# Contribution Guide

Thank you so much for wanting to contribute!

This document aims to inform you about how best to go about lending your time to the Pride in London ewb application.

## Maintainers
The current maintainer is Marcel Cutts (@marcelcutts).

The project is being developed by the community. Maintainers merge pull-requests and fix critical bugs. All other features and patches are welcomed to be implemented by community members.

## How you can help
We have a focused set of features we aim to deliver for this year's Pride parade, ideally before the **end of April 2018**. 

All features and bugs are tracked on this Trello board. The features are prioritised, but if they have no dependencies, feel free to pick them up if it is something you feel confident.

Features with dependencies, meaning features that can't be started until another feature is complete, cannot be picked up straight away. 

Features that are ready to go will be labelled as such!

Each feature should have a clear description of what needs to be done and why. Additionally there may be wireframes or technical notes to guide you along.

We will also inevitably start having bugs. These may be smaller tasks and contain details of the incorrect behaviour, why this is bad, and exactly how to reproduce it.

## Pull requests

If you fixed a bug ot completed a feature, you can submit a pull-request. It will be reviewed by a maintainer and accepted, or commented for rework, or declined.

### Before submitting a PR
1. Please review our suggested commit message format.
1. Make sure you have tests for your modifications
1. Run `yarn test` locally to catch any errors.


### Why did you close my pull request or issue?
Nothing is worse than a project with hundreds of stale issues. To keep things orderly, the maintainers try to close/resolve issues as quickly as possible.


## Filing Bugs
If you found an error, typo, or any other flaw in the project, please report it using GitHub Issues. Try searching the issues to see if there is an existing report of your bug or feature request.

When it comes to bugs, the more details you provide, the easier it is to reproduce the issue and the faster it could be fixed.

Some helpful datapoints to provide (if you can):

Specific errors that are visible
A failing test would be amazing
Code snippets that make the application exhibit that behaviour
Your operating system and browser



## Commit Message Format
We're borrowing the commit rules from [Git SCM](http://git-scm.com/book/ch5-2.html)

> ```
> Short (50 chars or less) summary of changes
> 
> More detailed explanatory text, if necessary.  Wrap it to about 72
> characters or so.  In some contexts, the first line is treated as the
> subject of an email and the rest of the text as the body.  The blank
> line separating the summary from the body is critical (unless you omit
> the body entirely); tools like rebase can get confused if you run the
> two together.
> 
> Further paragraphs come after blank lines.
> 
>   - Bullet points are okay, too
> 
>   - Typically a hyphen or asterisk is used for the bullet, preceded by a
>     single space, with blank lines in between, but conventions vary here
> ```

### Tips
* Write the summary line and description of what you have done in the imperative mode, that is as if you were commanding someone. Start the line with "Fix", "Add", "Change" instead of "Fixed", "Added", "Changed".
* If it seems difficult to summarize what your commit does, it may be because it includes several logical changes or bug fixes, and are better split up into several commits using `git add -p`.

