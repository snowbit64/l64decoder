// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: SetValue
// Entry Point: 00dfb194
// Size: 184 bytes
// Signature: undefined __thiscall SetValue(XMLNode * this, char * param_1, bool param_2)


/* tinyxml2::XMLNode::SetValue(char const*, bool) */

void __thiscall tinyxml2::XMLNode::SetValue(XMLNode *this,char *param_1,bool param_2)

{
  size_t sVar1;
  void *__dest;
  
  if (param_2) {
    if (((*(uint *)(this + 0x18) >> 9 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
      operator_delete__(*(void **)(this + 0x20));
    }
    *(undefined4 *)(this + 0x18) = 0;
    *(char **)(this + 0x20) = param_1;
    *(undefined8 *)(this + 0x28) = 0;
    return;
  }
  if (((*(uint *)(this + 0x18) >> 9 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  sVar1 = strlen(param_1);
  __dest = operator_new__(sVar1 + 1);
  *(void **)(this + 0x20) = __dest;
  memcpy(__dest,param_1,sVar1 + 1);
  *(size_t *)(this + 0x28) = (long)__dest + sVar1;
  *(undefined4 *)(this + 0x18) = 0x200;
  return;
}


