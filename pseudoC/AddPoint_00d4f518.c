// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AddPoint
// Entry Point: 00d4f518
// Size: 100 bytes
// Signature: undefined __thiscall AddPoint(ICHull * this, Vec3 * param_1, long param_2)


/* HACD::ICHull::AddPoint(HACD::Vec3<double> const&, long) */

undefined8 __thiscall HACD::ICHull::AddPoint(ICHull *this,Vec3 *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)
           CircularList<HACD::TMMVertex>::Add
                     ((CircularList<HACD::TMMVertex> *)(this + 0x10),(TMMVertex *)0x0);
  lVar2 = *(long *)(this + 0x18);
  *puVar1 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar1[3] = 0;
  *(long *)(lVar2 + 0x18) = param_2;
  puVar1[1] = uVar3;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  return 1;
}


