// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AddPoints
// Entry Point: 00d4f480
// Size: 152 bytes
// Signature: undefined __thiscall AddPoints(ICHull * this, vector param_1)


/* HACD::ICHull::AddPoints(std::__ndk1::vector<HACD::Vec3<double>,
   std::__ndk1::allocator<HACD::Vec3<double> > >) */

undefined8 __thiscall HACD::ICHull::AddPoints(ICHull *this,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_2[1] != *param_2) {
    lVar5 = 0;
    uVar6 = 0;
    do {
      puVar4 = (undefined8 *)
               CircularList<HACD::TMMVertex>::Add
                         ((CircularList<HACD::TMMVertex> *)(this + 0x10),(TMMVertex *)0x0);
      lVar2 = *param_2;
      lVar3 = param_2[1];
      uVar6 = uVar6 + 1;
      puVar1 = (undefined8 *)(lVar2 + lVar5);
      lVar5 = lVar5 + 0x18;
      *puVar4 = *puVar1;
      puVar4[1] = puVar1[1];
      puVar4[2] = puVar1[2];
    } while (uVar6 < (ulong)((lVar3 - lVar2 >> 3) * -0x5555555555555555));
  }
  return 1;
}


