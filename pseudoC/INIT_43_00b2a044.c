// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_43
// Entry Point: 00b2a044
// Size: 412 bytes
// Signature: undefined _INIT_43(void)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _INIT_43(void)

{
  JSONUtil::s_nul = 0;
  __cxa_atexit(JSONUtil::Atom::~Atom,&JSONUtil::s_nul,&PTR_LOOP_00fd8de0);
  JSONUtil::s_true = 1;
  DAT_02118680 = 1;
  __cxa_atexit(JSONUtil::Atom::~Atom,&JSONUtil::s_true,&PTR_LOOP_00fd8de0);
  JSONUtil::s_false = 1;
  DAT_02118690 = 0;
  __cxa_atexit(JSONUtil::Atom::~Atom,&JSONUtil::s_false,&PTR_LOOP_00fd8de0);
  JSONUtil::s_zero = 0xa02;
  DAT_021186a0 = 0;
  __cxa_atexit(JSONUtil::Atom::~Atom,&JSONUtil::s_zero,&PTR_LOOP_00fd8de0);
  JSONUtil::s_one = 0xa02;
  DAT_021186b0 = 0x3ff0000000000000;
  __cxa_atexit(JSONUtil::Atom::~Atom,&JSONUtil::s_one,&PTR_LOOP_00fd8de0);
  JSONUtil::s_emptyString = 3;
  DAT_021186c0 = (undefined *)operator_new__(1);
  *DAT_021186c0 = 0;
  __cxa_atexit(JSONUtil::Atom::~Atom,&JSONUtil::s_emptyString,&PTR_LOOP_00fd8de0);
  _DAT_021186d0 = (undefined8 *)operator_new(0x18);
  _DAT_021186d0[1] = 0;
  _DAT_021186d0[2] = 0;
  *_DAT_021186d0 = 0;
  JSONUtil::s_emptyArrayAtom = 5;
  __cxa_atexit(JSONUtil::Atom::~Atom,&JSONUtil::s_emptyArrayAtom,&PTR_LOOP_00fd8de0);
  _DAT_021186e0 = (undefined8 *)operator_new(0x28);
  *(undefined4 *)(_DAT_021186e0 + 4) = 0x3f800000;
  _DAT_021186e0[1] = 0;
  *_DAT_021186e0 = 0;
  _DAT_021186e0[3] = 0;
  _DAT_021186e0[2] = 0;
  JSONUtil::s_emptyObjectAtom = 4;
  __cxa_atexit(JSONUtil::Atom::~Atom,&JSONUtil::s_emptyObjectAtom,&PTR_LOOP_00fd8de0);
  _DAT_021186f0 = 0;
  _DAT_021186f8 = 0;
  JSONUtil::s_emptyArray = 0;
  __cxa_atexit(JSONUtil::Array::~Array,&JSONUtil::s_emptyArray,&PTR_LOOP_00fd8de0);
  JSONUtil::s_emptyObject._32_4_ = 0x3f800000;
  JSONUtil::s_emptyObject._8_8_ = 0;
  JSONUtil::s_emptyObject._0_8_ = 0;
  JSONUtil::s_emptyObject._24_8_ = 0;
  JSONUtil::s_emptyObject._16_8_ = 0;
  __cxa_atexit(JSONUtil::Object::~Object,JSONUtil::s_emptyObject,&PTR_LOOP_00fd8de0);
  return;
}


