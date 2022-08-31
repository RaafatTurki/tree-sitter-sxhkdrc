// official grammar referrence
// https://github.com/baskerville/sxhkd/blob/master/doc/sxhkd.1.asciidoc#configuration

// let hotkey_regex = /[A-Za-z0-9]+/
let hotkey_regex = /[A-Za-z0-9_]+/

module.exports = grammar({
  name: 'sxhkdrc',

  extras: $ => [
    $.comment,
    /\s/,
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.binding,
    ),

    binding: $ => seq(
      $.hotkey,
      '\n',
      /\s+/,
      optional($.command_sync_prefix),
      $.command,
      '\n'
    ),

    hotkey: $ => seq(
      repeat(seq(
        $._hotkey,
        '\\\n'
      )),
      $._hotkey,
    ),
    _hotkey: $ => repeat1(choice(
      $.modifier,
      $.operator,
      $.punctuation,
      $.attribute,
      $.delimiter,
      $.keysym,
      $.range,
    )),

    modifier: $ => choice(
      'super',
      'hyper',
      'meta',
      'alt',
      'control',
      'ctrl',
      'shift',
      'mode_switch',
      'lock',
      'mod1',
      'mod2',
      'mod3',
      'mod4',
      'mod5',
      'any',
    ),
    operator: $ => '+',
    attribute: $ => choice('@', '~'),
    punctuation: $ => choice('{', ',', '}'),
    delimiter: $ => choice(';', ':'),
    command_sync_prefix: $ => ';',
    keysym: $ => hotkey_regex,
    range: $ => token(
      seq(
        /[A-Za-z0-9]/,
        '-',
        /[A-Za-z0-9]/,
      )
    ),
    comment: $ => token(prec(-10, /#.*/)),

    command: $ => seq(
      repeat(/[^;].*\\\n\s+/),
      /[^;].*/,
    ),
  }
});
