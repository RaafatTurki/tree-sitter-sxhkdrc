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
      $.command,
    ),

    hotkey: $ => repeat1(choice(
      $.modifier,
      $.operator,
      $.punctuation,
      $.keysym,
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
      'any'
    ),
    operator: $ => choice('+', '-', ':', '~'),
    punctuation: $ => choice('{', ',', '}'),
    // keysym: $ => prec(-10, hotkey_regex),
    keysym: $ => hotkey_regex,
    comment: $ => token(prec(-10, /#.*/)),
    command: $ => token(prec(-10, /.*\n/)),

    // clauses e.g. M{an,oon}
    // clause_segment: $ => hotkey_regex,
    // pre_clause_segment: $ => alias($.clause_segment, 'pre_clause_segment'),
    // post_clause_segment: $ => token.immediate(hotkey_regex),

    // clause: $ => seq(
    //   optional($.pre_clause_segment),
    //   '{',
    //   $.clause_segment,
    //   repeat1(seq(',', $.clause_segment)),
    //   '}',
    //   optional($.post_clause_segment),
    // ),

    // internal_clause: $ => token.immediate(seq(
    //   '{',
    //   $.keysym,
    //   repeat(seq(',', $.keysym)),
    //   '}',
    // )),
  }
});
