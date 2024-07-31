/*
    . Fold expressions: 
        . We have two forms: 
            . Unary fold expressions, which don't have an initial value.
            . Binary fold expressions, which have an initial value.
 */
module;

export module fold_expressions;

namespace fold_expressions{

    // Function add_unary_left_fold
    // add(1,2,3) becomes ((1 + 2) + 3)
    export template <typename... Args>
    auto add_unary_left_fold(Args... args) {
        return ( ... + args);
    }

    //Function sub_unary_left_fold
    //sub(1,2,3) becomes ((1 - 2) - 3)
    export template <typename... Args>
    auto sub_unary_left_fold(Args... args) {
        return ( ... - args);
    }

    /************************************************************* */

    // Function add_unary_right_fold
    // add(1,2,3) becomes (1 + (2 + 3))
    export template <typename... Args>
    auto add_unary_right_fold(Args... args) {
        return (args + ...);
    }

    //Function sub_unary_right_fold
    //sub(1,2,3) becomes (1 - (2 - 3))
    export template <typename... Args>
    auto sub_unary_right_fold(Args... args) {
        return (args - ...);
    }

    /************************************************************* */

    // Function add_binary_left_fold
    // add(1,2,3) becomes 0 + (1 + (2 + 3))
    export template <typename... Args>
    auto add_binary_left_fold(Args... args) {
        return (0 + ... + args);
    }

    //Function sub_binary_left_fold
    //sub(1,2,3) becomes 0 - (1 - (2 - 3))
    export template <typename... Args>
    auto sub_binary_left_fold(Args... args) {
        return (0 - ... - args);
    }

    /************************************************************* */

    // Function add_binary_right_fold
    // add(1,2,3) becomes ((1 + (2 + 3)) + 0)
    export template <typename... Args>
    auto add_binary_right_fold(Args... args) {
        return (args + ... + 0);
    }

    //Function sub_binary_right_fold
    //sub(1,2,3) becomes ((1 - (2 - 3)) - 0)
    export template <typename... Args>
    auto sub_binary_right_fold(Args... args) {
        return (args - ... - 0);
    }

}   // namespace fold_expressions