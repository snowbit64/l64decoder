// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetAttribute
// Entry Point: 00dfdccc
// Size: 136 bytes
// Signature: undefined __thiscall SetAttribute(XMLAttribute * this, char * param_1)


/* tinyxml2::XMLAttribute::SetAttribute(char const*) */

void __thiscall tinyxml2::XMLAttribute::SetAttribute(XMLAttribute *this,char *param_1)

{
  size_t sVar1;
  void *__dest;
  
  if ((((byte)this[0x21] >> 1 & 1) != 0) && (*(void **)(this + 0x28) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x28));
  }
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  sVar1 = strlen(param_1);
  __dest = operator_new__(sVar1 + 1);
  *(void **)(this + 0x28) = __dest;
  memcpy(__dest,param_1,sVar1 + 1);
  *(size_t *)(this + 0x30) = (long)__dest + sVar1;
  *(undefined4 *)(this + 0x20) = 0x200;
  return;
}


