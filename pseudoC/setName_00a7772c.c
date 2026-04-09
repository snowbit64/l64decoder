// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setName
// Entry Point: 00a7772c
// Size: 56 bytes
// Signature: undefined __thiscall setName(Entity * this, char * param_1)


/* Entity::setName(char const*) */

void __thiscall Entity::setName(Entity *this,char *param_1)

{
  undefined8 uVar1;
  
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  uVar1 = StringUtil::createStrCpy(param_1);
  *(undefined8 *)(this + 8) = uVar1;
  return;
}


