// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AddPoints
// Entry Point: 00d4f3fc
// Size: 132 bytes
// Signature: undefined __thiscall AddPoints(ICHull * this, Vec3 * param_1, ulong param_2)


/* HACD::ICHull::AddPoints(HACD::Vec3<double> const*, unsigned long) */

bool __thiscall HACD::ICHull::AddPoints(ICHull *this,Vec3 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  if ((param_1 != (Vec3 *)0x0) && (param_2 != 0)) {
    uVar3 = 0;
    puVar4 = (undefined8 *)(param_1 + 8);
    do {
      puVar2 = (undefined8 *)
               CircularList<HACD::TMMVertex>::Add
                         ((CircularList<HACD::TMMVertex> *)(this + 0x10),(TMMVertex *)0x0);
      uVar5 = puVar4[-1];
      puVar2[3] = uVar3;
      uVar3 = uVar3 + 1;
      *puVar2 = uVar5;
      puVar2[1] = *puVar4;
      puVar1 = puVar4 + 1;
      puVar4 = puVar4 + 3;
      puVar2[2] = *puVar1;
    } while (param_2 != uVar3);
  }
  return param_1 != (Vec3 *)0x0;
}


