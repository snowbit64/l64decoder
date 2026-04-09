// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<
// Entry Point: 006e5fa4
// Size: 136 bytes
// Signature: undefined __thiscall operator<(ScriptDesc * this, ResourceDesc * param_1)


/* Script::ScriptDesc::TEMPNAMEPLACEHOLDERVALUE(ResourceDesc const*) const */

uint __thiscall Script::ScriptDesc::operator<(ScriptDesc *this,ResourceDesc *param_1)

{
  ulong uVar1;
  ulong uVar2;
  size_t __n;
  ResourceDesc RVar3;
  ScriptDesc SVar4;
  uint uVar5;
  ResourceDesc *__s2;
  ScriptDesc *__s1;
  
  RVar3 = param_1[8];
  SVar4 = this[8];
  uVar1 = (ulong)((byte)RVar3 >> 1);
  if (((byte)RVar3 & 1) != 0) {
    uVar1 = *(ulong *)(param_1 + 0x10);
  }
  uVar2 = (ulong)((byte)SVar4 >> 1);
  if (((byte)SVar4 & 1) != 0) {
    uVar2 = *(ulong *)(this + 0x10);
  }
  __n = uVar1;
  if (uVar2 <= uVar1) {
    __n = uVar2;
  }
  if (__n != 0) {
    __s2 = *(ResourceDesc **)(param_1 + 0x18);
    __s1 = *(ScriptDesc **)(this + 0x18);
    if (((byte)RVar3 & 1) == 0) {
      __s2 = param_1 + 9;
    }
    if (((byte)SVar4 & 1) == 0) {
      __s1 = this + 9;
    }
    uVar5 = memcmp(__s1,__s2,__n);
    if (uVar5 != 0) goto LAB_006e601c;
  }
  uVar5 = 0;
  if (uVar2 < uVar1) {
    uVar5 = 0xffffffff;
  }
LAB_006e601c:
  return uVar5 >> 0x1f;
}


