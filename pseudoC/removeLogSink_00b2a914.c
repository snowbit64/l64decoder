// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeLogSink
// Entry Point: 00b2a914
// Size: 176 bytes
// Signature: undefined __thiscall removeLogSink(Logger * this, ILogSink * param_1)


/* Logger::removeLogSink(ILogSink*) */

void __thiscall Logger::removeLogSink(Logger *this,ILogSink *param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(uint *)this;
  if (uVar1 != 0) {
    uVar3 = 0;
    puVar5 = (undefined8 *)(this + 0x10);
    uVar6 = (ulong)(uVar1 - 1);
    do {
      if ((ILogSink *)puVar5[-1] == param_1) {
        uVar2 = uVar1 - 1;
        if (uVar2 <= (uint)uVar3) goto LAB_00b2a9bc;
        uVar7 = uVar2 - uVar3;
        if (uVar7 < 4) goto LAB_00b2a99c;
        uVar8 = (uVar1 - 1) - uVar3;
        uVar3 = (uVar6 & 0xfffffffffffffffc) + uVar3;
        uVar8 = uVar8 & 0xfffffffffffffffc;
        do {
          uVar9 = *puVar5;
          uVar10 = puVar5[2];
          uVar8 = uVar8 - 4;
          *puVar5 = puVar5[1];
          puVar5[-1] = uVar9;
          puVar5[2] = puVar5[3];
          puVar5[1] = uVar10;
          puVar5 = puVar5 + 4;
        } while (uVar8 != 0);
        if (uVar7 != (uVar7 & 0xfffffffffffffffc)) {
LAB_00b2a99c:
          lVar4 = uVar2 - uVar3;
          puVar5 = (undefined8 *)(this + uVar3 * 8 + 0x10);
          do {
            lVar4 = lVar4 + -1;
            puVar5[-1] = *puVar5;
            puVar5 = puVar5 + 1;
          } while (lVar4 != 0);
        }
LAB_00b2a9bc:
        *(uint *)this = uVar2;
        return;
      }
      uVar3 = uVar3 + 1;
      uVar6 = uVar6 - 1;
      puVar5 = puVar5 + 1;
    } while (uVar1 != uVar3);
  }
  return;
}


