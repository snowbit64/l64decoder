// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initRecordingDevice
// Entry Point: 00e36fc4
// Size: 336 bytes
// Signature: undefined __thiscall initRecordingDevice(Soloud * this, uint param_1, FORMAT param_2, uint param_3, uint * param_4)


/* SoLoud::Soloud::initRecordingDevice(unsigned int, SoLoud::Soloud::FORMAT, unsigned int, unsigned
   int&) */

undefined8 __thiscall
SoLoud::Soloud::initRecordingDevice
          (Soloud *this,uint param_1,FORMAT param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  void *__s;
  code *pcVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (*(uint *)(this + 0x2820) <= param_1) {
    return 7;
  }
  pcVar3 = *(code **)(this + 0x30);
  *param_4 = *(uint *)(this + (ulong)param_1 * 0x90 + 0x23a8);
  if (pcVar3 != (code *)0x0) {
    uVar4 = (ulong)param_1;
    uVar2 = (*pcVar3)(this,this + uVar4 * 0x90 + 0x23a0,(ulong)param_3);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    *(FORMAT *)(this + uVar4 * 0x90 + 0x2410) = param_2;
    *(undefined4 *)(this + uVar4 * 0x90 + 0x241c) = 0;
    if (*(void **)(this + uVar4 * 0x90 + 0x2420) != (void *)0x0) {
      operator_delete__(*(void **)(this + uVar4 * 0x90 + 0x2420));
    }
    uVar1 = *(uint *)(this + uVar4 * 0x90 + 0x23c0);
    __s = operator_new__((ulong)uVar1 << 2);
    *(void **)(this + uVar4 * 0x90 + 0x2420) = __s;
    memset(__s,0,(ulong)uVar1 << 2);
    *(undefined4 *)(this + uVar4 * 0x90 + 0x2428) = 0;
    *(undefined4 *)(this + uVar4 * 0x90 + 0x2418) = 0;
    fVar5 = (float)(unkuint9)*(ulong *)(this + uVar4 * 0x90 + 0x23b8) / (float)(ulong)param_3;
    fVar6 = 0.0;
    if (fVar5 <= 4096.0) {
      fVar6 = fVar5 * 1048576.0;
    }
    *(int *)(this + uVar4 * 0x90 + 0x2414) = (int)fVar6;
    return 0;
  }
  return 6;
}


