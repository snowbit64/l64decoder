// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveCostMap
// Entry Point: 0072dfe4
// Size: 428 bytes
// Signature: undefined __thiscall saveCostMap(VehicleNavigationMapGenerator * this, char * param_1, bool param_2)


/* VehicleNavigationMapGenerator::saveCostMap(char const*, bool) */

void __thiscall
VehicleNavigationMapGenerator::saveCostMap
          (VehicleNavigationMapGenerator *this,char *param_1,bool param_2)

{
  uint uVar1;
  undefined2 *__src;
  undefined2 *__dest;
  VehicleNavigationMapGenerator *this_00;
  undefined8 *this_01;
  void *__dest_00;
  int iVar2;
  ulong __n;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((*(long *)(this + 0x180) != 0) && (param_2)) {
    return;
  }
  lVar7 = *(long *)(this + 0x108);
  fVar9 = *(float *)(lVar7 + 0xc0) * 64.0;
  fVar8 = 1.0 / *(float *)(lVar7 + 0xc0);
  fVar10 = (float)(ulong)*(uint *)(lVar7 + 0xc4);
  fVar11 = (float)(ulong)*(uint *)(lVar7 + 200);
  iVar5 = (int)(fVar10 / fVar9);
  iVar6 = (int)(fVar11 / fVar9);
  iVar3 = (int)(fVar8 * fVar10);
  iVar4 = (int)(fVar8 * fVar11);
  uVar1 = iVar5 * iVar6 + *(uint *)(lVar7 + 200) * *(uint *)(lVar7 + 0xc4) + 8;
  __n = (ulong)uVar1;
  __src = (undefined2 *)operator_new__(__n);
  __dest = __src + 4;
  *__src = (short)iVar3;
  __src[1] = (short)iVar4;
  __src[2] = (short)iVar5;
  __src[3] = (short)iVar6;
  if (iVar5 != 0) {
    iVar2 = 0;
    do {
      if (iVar6 != 0) {
        lVar7 = 0;
        do {
          *(undefined *)((long)__dest + lVar7) =
               *(undefined *)
                (*(long *)(*(long *)(this + 0x108) + 0xb8) +
                (ulong)(uint)(iVar2 + *(int *)(*(long *)(this + 0x108) + 0xcc) * (int)lVar7));
          lVar7 = lVar7 + 1;
        } while (iVar6 != (int)lVar7);
        __dest = (undefined2 *)((long)__dest + lVar7);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != iVar5);
    lVar7 = *(long *)(this + 0x108);
  }
  this_00 = (VehicleNavigationMapGenerator *)
            memcpy(__dest,*(void **)(lVar7 + 0x10),(ulong)(uint)(iVar3 * iVar4));
  if (param_2) {
    this_01 = (undefined8 *)operator_new(0x70);
                    /* try { // try from 0072e114 to 0072e123 has its CatchHandler @ 0072e190 */
    SaveHelper::SaveHelper((SaveHelper *)this_01,param_1,"VNMapSaveHelper");
    *(undefined4 *)(this_01 + 0xd) = 0;
    *(undefined8 **)(this + 0x180) = this_01;
    this_01[0xb] = this;
    this_01[0xc] = 0;
    *this_01 = &PTR__VNMapSaveHelper_00fda888;
    __dest_00 = operator_new__(__n);
    *(uint *)(this_01 + 0xd) = uVar1;
    this_01[0xc] = __dest_00;
    memcpy(__dest_00,__src,__n);
  }
  else {
    finishSaving(this_00,param_1,(uchar *)__src,uVar1);
  }
  operator_delete__(__src);
  return;
}


