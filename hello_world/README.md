# HELLO WORLD MODULE DOCUMENTATION

This module uses Features and Features Extra (specifically fe_block.module)
to store settings for a view output as a block. It also implements hook_node_view().

## Views

The view (hello_world_nodes) shows all nodes of hello_world_article node type
which have taxonomy terms from the 'Sections' vocabulary, as long as the selected
terms have their 'enabled' box checked. This view is output as a block and
assigned to the right sidebar. Instead of a conventional block title, which is
not bold by default in the Bartik theme, the view has a header area with inline
styles. Generally, I would avoid this method by using CSS in a custom theme if
the block title needed to be bold. 

This part of the functionality could also have been accomplished by manually
creating a block within the module, using the block hooks, which means this module
would not have required Features Extra. However, the method I chose is more
configurable within the Features UI.

## Hooks

The 'Content starts here!' text is created by the implementation of
hook_node_view(). During his hook, we prepend the message within the node->content
array. This could have been implemented as a block, but the method I chose has the
advantage of prepending the text directly to the node body, thus simplifying the
DOM and requiring no extra CSS.

## Known issues

The 'hello_world' feature appears as 'Overridden' as soon as it is enabled; the
views block is not properly assigned to the right sidebar. Reverting the feature
immediately after enabling fixes this issue.

## Changes to content_type_vocab_hello_world module

I changed one element of the 'parent' module, content_type_vocab_hello_world,
because it did not specify '0' and '1' as the options for the boolean field,
and this made it harder to use Views UI in selecting the value of 'enabled'.
See [this commit](https://github.com/nathaneanes/hello-world/commit/242b35cf99ba7f8e9d24d356cacb4cbedfc3d699) for details.