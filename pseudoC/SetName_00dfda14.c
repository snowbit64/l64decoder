// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetName
// Entry Point: 00dfda14
// Size: 136 bytes
// Signature: undefined __thiscall SetName(XMLAttribute * this, char * param_1)


/* tinyxml2::XMLAttribute::SetName(char const*) */

void __thiscall tinyxml2::XMLAttribute::SetName(XMLAttribute *this,char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  if ((((byte)this[9] >> 1 & 1) != 0) && (*(void **)(this + 0x10) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x10));
  }
  *(undefined4 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  sVar1 = strlen(param_1);
  __dest = operator_new__(sVar1 + 1);
  *(void **)(this + 0x10) = __dest;
  memcpy(__dest,param_1,sVar1 + 1);
  *(size_t *)(this + 0x18) = (long)__dest + sVar1;
  *(undefined4 *)(this + 8) = 0x200;
  return;
}


