// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AddPoints
// Entry Point: 00eacb70
// Size: 228 bytes
// Signature: undefined __thiscall AddPoints(ICHull * this, Vec3 * param_1, ulong param_2)


/* VHACD::ICHull::AddPoints(VHACD::Vec3<double> const*, unsigned long) */

bool __thiscall VHACD::ICHull::AddPoints(ICHull *this,Vec3 *param_1,ulong param_2)

{
  TMMVertex *this_00;
  undefined8 *this_01;
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((param_1 != (Vec3 *)0x0) && (param_2 != 0)) {
    uVar2 = 0;
    lVar1 = *(long *)(this + 0x10);
    puVar3 = (undefined8 *)(param_1 + 8);
    do {
      if (lVar1 == 0) {
        this_01 = (undefined8 *)operator_new(0x48);
        TMMVertex::TMMVertex((TMMVertex *)this_01);
        *(undefined8 **)(this + 8) = this_01;
        this_01[7] = this_01;
        this_01[8] = this_01;
      }
      else {
        lVar1 = *(long *)(this + 8);
        lVar4 = *(long *)(lVar1 + 0x38);
        this_00 = (TMMVertex *)operator_new(0x48);
        TMMVertex::TMMVertex(this_00);
        *(TMMVertex **)(this + 8) = this_00;
        *(long *)(this_00 + 0x38) = lVar4;
        *(long *)(this_00 + 0x40) = lVar1;
        *(TMMVertex **)(lVar1 + 0x38) = this_00;
        *(undefined8 *)(lVar4 + 0x40) = *(undefined8 *)(this + 8);
        this_01 = *(undefined8 **)(this + 8);
      }
      uVar5 = puVar3[-1];
      *(int *)(this_01 + 3) = (int)uVar2;
      lVar1 = *(long *)(this + 0x10);
      uVar2 = uVar2 + 1;
      *this_01 = uVar5;
      lVar1 = lVar1 + 1;
      this_01[1] = *puVar3;
      uVar5 = puVar3[1];
      puVar3 = puVar3 + 3;
      *(long *)(this + 0x10) = lVar1;
      this_01[2] = uVar5;
    } while (param_2 != uVar2);
  }
  return param_1 != (Vec3 *)0x0;
}


