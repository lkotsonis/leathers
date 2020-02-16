### Main table

 Name                                  | Clang        | GCC          | MSVC |
---------------------------------------|--------------|--------------|------|
 behavior-change                       | *no*         | *no*         | 4350 |
 bool-conversion                       | **same**     | *no*         | *no* |
 c++11-extensions                      | **same**     | *no*         | *no* |
 cast-align                            | **same**     | **same**     | *no* |
 catch-semantic-changed                | *no*         | *no*         | 4571 |
 conditional-uninitialized             | **same**     | *no*         | *no* |
 constant-conditional                  | *no*         | *no*         | 4127 |
 constant-conversion                   | **same**     | *no*         | *no* |
 conversion                            | **same**     | **same**     | 4244 |
 conversion-loss                       | conversion   | conversion   | 4242 |
 conversion-sign-extended              | *no*         | *no*         | 4826 |
 covered-switch-default                | **same**     | *no*         | *no* |
 deprecated                            | **same**     | **same**     | *no* |
 deprecated-declarations               | **same**     | **same**     | 4996 |
 deprecated-objc-isa-usage             | **same**     | *no*         | *no* |
 deprecated-register                   | **same**     | *no*         | *no* |
 digraphs-not-supported                | *no*         | *no*         | 4628 |
 disabled-macro-expansion              | **same**     | *no*         | *no* |
 documentation                         | **same**     | *no*         | *no* |
 documentation-unknown-command         | **same**     | *no*         | *no* |
 empty-body                            | **same**     | **same**     | *no* |
 enum-conversion                       | **same**     | *no*         | *no* |
 exit-time-destructors                 | **same**     | *no*         | *no* |
 extra-semi                            | **same**     | *no*         | *no* |
 format                                | **same**     | **same**     | *no* |
 four-char-constants                   | **same**     | *no*         | *no* |
 global-constructors                   | **same**     | *no*         | *no* |
 ill-formed-comma-expr                 | unused-value | unused-value | 4548 |
 implicit-fallthrough                  | **same**     | *no*         | *no* |
 inherits-via-dominance                | *no*         | *no*         | 4250 |
 int-conversion                        | **same**     | *no*         | *no* |
 invalid-offsetof                      | **same**     | **same**     | *no* |
 is-defined-to-be                      | *no*         | *no*         | 4574 |
 layout-changed                        | *no*         | *no*         | 4371 |
 missing-braces                        | **same**     | **same**     | *no* |
 missing-field-initializers            | **same**     | **same**     | *no* |
 missing-noreturn                      | **same**     | **same**     | *no* |
 missing-prototypes                    | **same**     | **same**     | *no* |
 name-length-exceeded                  | *no*         | *no*         | 4503 |
 newline-eof                           | **same**     | *no*         | *no* |
 no-such-warning                       | *no*         | *no*         | 4619 |
 non-virtual-dtor                      | **same**     | **same**     | 4265 |
 object-layout-change                  | *no*         | *no*         | 4435 |
 old-style-cast                        | **same**     | **same**     | *no* |
 overloaded-virtual                    | **same**     | **same**     | *no* |
 padded                                | **same**     | **same**     | 4820 |
 parentheses                           | **same**     | **same**     | *no* |
 pedantic                              | **same**     | **same**     | *no* |
 pointer-sign                          | **same**     | **same**     | *no* |
 return-type                           | **same**     | **same**     | *no* |
 shadow                                | **same**     | **same**     | *no* |
 shift-sign-overflow                   | **same**     | *no*         | *no* |
 shorten-64-to-32                      | **same**     | *no*         | *no* |
 sign-compare                          | **same**     | **same**     | 4389 |
 sign-conversion                       | **same**     | **same**     | 4365 |
 signed-unsigned-compare               | sign-compare | sign-compare | 4388 |
 static-ctor-not-thread-safe           | *no*         | *no*         | 4640 |
 switch                                | **same**     | **same**     | 4062 |
 switch-enum                           | **same**     | **same**     | 4061 |
 this-used-in-init                     | *no*         | *no*         | 4355 |
 undef                                 | **same**     | **same**     | 4668 |
 uninitialized                         | **same**     | **same**     | *no* |
 unknown-pragmas                       | **same**     | **same**     | *no* |
 unreachable-code                      | **same**     | **same**     | 4702 |
 unreachable-code-return               | **same**     | *no*         | *no* |
 unsafe-conversion                     | *no*         | *no*         | 4191 |
 unused-but-set-variable               | *no*         | **same**     | *no* |
 unused-function                       | **same**     | **same**     | *no* |
 unused-label                          | **same**     | **same**     | *no* |
 unused-parameter                      | **same**     | **same**     | 4100 |
 unused-value                          | **same**     | **same**     | 4555 |
 unused-variable                       | **same**     | **same**     | *no* |
 used-but-marked-unused                | **same**     | *no*         | *no* |
 weak-vtables                          | **same**     | *no*         | *no* |
 arc-bridge-casts-disallowed-in-nonarc | **same**     | *no*         | *no* |
 arc-repeated-use-of-weak              | **same**     | *no*         | *no* |
 deprecated-implementations            | **same**     | *no*         | *no* |
 duplicate-method-match                | **same**     | *no*         | *no* |
 explicit-ownership-type               | **same**     | *no*         | *no* |
 implicit-atomic-properties            | **same**     | *no*         | *no* |
 implicit-retain-self                  | **same**     | *no*         | *no* |
 objc-missing-property-synthesis       | **same**     | *no*         | *no* |
 objc-root-class                       | **same**     | *no*         | *no* |
 protocol                              | **same**     | **same**     | *no* |
 receiver-is-weak                      | **same**     | *no*         | *no* |
 selector                              | **same**     | **same**     | *no* |
 strict-selector-match                 | **same**     | **same**     | *no* |
 undeclared-selector                   | **same**     | **same**     | *no* |

### Table for group: `special-members`

 Name                             | Clang | GCC  | MSVC |
----------------------------------|-------|------|------|
 assign-base-inaccessible         | *no*  | *no* | 4626 |
 assign-could-not-be-generated    | *no*  | *no* | 4512 |
 copy-ctor-could-not-be-generated | *no*  | *no* | 4625 |
 dflt-ctor-base-inaccessible      | *no*  | *no* | 4623 |
 dflt-ctor-could-not-be-generated | *no*  | *no* | 4510 |
 user-ctor-required               | *no*  | *no* | 4610 |

### Table for group: `inline`

 Name                | Clang | GCC  | MSVC |
---------------------|-------|------|------|
 automatic-inline    | *no*  | *no* | 4711 |
 force-not-inlined   | *no*  | *no* | 4714 |
 not-inlined         | *no*  | *no* | 4710 |
 unreferenced-inline | *no*  | *no* | 4514 |

### Table for group: `compatibility-c++98`

 Name                  | Clang    | GCC  | MSVC |
-----------------------|----------|------|------|
 c++98-compat          | **same** | *no* | *no* |
 c++98-compat-pedantic | **same** | *no* | *no* |


### Xcode/Clang table

 Clang                                 | Xcode                                           | Objective-C |
---------------------------------------|-------------------------------------------------|-------------|
 bool-conversion                       | CLANG_WARN_BOOL_CONVERSION                      | no          |
 c++11-extensions                      | CLANG_WARN_CXX0X_EXTENSIONS                     | no          |
 constant-conversion                   | CLANG_WARN_CONSTANT_CONVERSION                  | no          |
 conversion                            | CLANG_WARN_SUSPICIOUS_IMPLICIT_CONVERSION       | no          |
 deprecated-declarations               | GCC_WARN_ABOUT_DEPRECATED_FUNCTIONS             | no          |
 deprecated-objc-isa-usage             | CLANG_WARN_DIRECT_OBJC_ISA_USAGE                | no          |
 documentation                         | CLANG_WARN_DOCUMENTATION_COMMENTS               | no          |
 empty-body                            | CLANG_WARN_EMPTY_BODY                           | no          |
 enum-conversion                       | CLANG_WARN_ENUM_CONVERSION                      | no          |
 exit-time-destructors                 | CLANG_WARN__EXIT_TIME_DESTRUCTORS               | no          |
 format                                | GCC_WARN_TYPECHECK_CALLS_TO_PRINTF              | no          |
 four-char-constants                   | GCC_WARN_FOUR_CHARACTER_CONSTANTS               | no          |
 unused-value                          | GCC_WARN_UNUSED_VALUE                           | no          |
 int-conversion                        | CLANG_WARN_INT_CONVERSION                       | no          |
 invalid-offsetof                      | GCC_WARN_ABOUT_INVALID_OFFSETOF_MACRO           | no          |
 missing-braces                        | GCC_WARN_INITIALIZER_NOT_FULLY_BRACKETED        | no          |
 missing-field-initializers            | GCC_WARN_ABOUT_MISSING_FIELD_INITIALIZERS       | no          |
 missing-prototypes                    | GCC_WARN_ABOUT_MISSING_PROTOTYPES               | no          |
 newline-eof                           | GCC_WARN_ABOUT_MISSING_NEWLINE                  | no          |
 non-virtual-dtor                      | GCC_WARN_NON_VIRTUAL_DESTRUCTOR                 | no          |
 overloaded-virtual                    | GCC_WARN_HIDDEN_VIRTUAL_FUNCTIONS               | no          |
 parentheses                           | GCC_WARN_MISSING_PARENTHESES                    | no          |
 pointer-sign                          | GCC_WARN_ABOUT_POINTER_SIGNEDNESS               | no          |
 return-type                           | GCC_WARN_ABOUT_RETURN_TYPE                      | no          |
 shadow                                | GCC_WARN_SHADOW                                 | no          |
 shorten-64-to-32                      | GCC_WARN_64_TO_32_BIT_CONVERSION                | no          |
 sign-compare                          | GCC_WARN_SIGN_COMPARE                           | no          |
 sign-conversion                       | CLANG_WARN_IMPLICIT_SIGN_CONVERSION             | no          |
 switch                                | GCC_WARN_CHECK_SWITCH_STATEMENTS                | no          |
 uninitialized                         | GCC_WARN_UNINITIALIZED_AUTOS                    | no          |
 unknown-pragmas                       | GCC_WARN_UNKNOWN_PRAGMAS                        | no          |
 unused-function                       | GCC_WARN_UNUSED_FUNCTION                        | no          |
 unused-label                          | GCC_WARN_UNUSED_LABEL                           | no          |
 unused-parameter                      | GCC_WARN_UNUSED_PARAMETER                       | no          |
 unused-variable                       | GCC_WARN_UNUSED_VARIABLE                        | no          |
 arc-bridge-casts-disallowed-in-nonarc | CLANG_WARN__ARC_BRIDGE_CAST_NONARC              | yes         |
 arc-repeated-use-of-weak              | CLANG_WARN_OBJC_REPEATED_USE_OF_WEAK            | yes         |
 deprecated-implementations            | CLANG_WARN_DEPRECATED_OBJC_IMPLEMENTATIONS      | yes         |
 duplicate-method-match                | CLANG_WARN__DUPLICATE_METHOD_MATCH              | yes         |
 explicit-ownership-type               | CLANG_WARN_OBJC_EXPLICIT_OWNERSHIP_TYPE         | yes         |
 implicit-atomic-properties            | CLANG_WARN_OBJC_IMPLICIT_ATOMIC_PROPERTIES      | yes         |
 implicit-retain-self                  | CLANG_WARN_OBJC_IMPLICIT_RETAIN_SELF            | yes         |
 objc-missing-property-synthesis       | CLANG_WARN_OBJC_MISSING_PROPERTY_SYNTHESIS      | yes         |
 objc-root-class                       | CLANG_WARN_OBJC_ROOT_CLASS                      | yes         |
 protocol                              | GCC_WARN_ALLOW_INCOMPLETE_PROTOCOL              | yes         |
 receiver-is-weak                      | CLANG_WARN_OBJC_RECEIVER_WEAK                   | yes         |
 selector                              | GCC_WARN_MULTIPLE_DEFINITION_TYPES_FOR_SELECTOR | yes         |
 strict-selector-match                 | GCC_WARN_STRICT_SELECTOR_MATCH                  | yes         |
 undeclared-selector                   | GCC_WARN_UNDECLARED_SELECTOR                    | yes         |

* Note: this table generated [automatically][1]

[1]: https://github.com/ruslo/sugar/wiki/Cross-platform-warning-suppression#generator