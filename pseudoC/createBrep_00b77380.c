// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createBrep
// Entry Point: 00b77380
// Size: 288 bytes
// Signature: undefined __cdecl createBrep(float * param_1, uint param_2, uint * param_3, uint param_4, bool param_5, bool param_6)


/* BrepUtil::createBrep(float const*, unsigned int, unsigned int const*, unsigned int, bool, bool)
    */

Brep * BrepUtil::createBrep
                 (float *param_1,uint param_2,uint *param_3,uint param_4,bool param_5,bool param_6)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  BrepTriangle *pBVar4;
  Brep *this;
  int iVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  
  lVar3 = tpidr_el0;
  lVar6 = *(long *)(lVar3 + 0x28);
  pBVar4 = (BrepTriangle *)operator_new__(((ulong)param_4 + (ulong)param_4 * 4) * 4);
  if (param_4 != 0) {
    uVar7 = 0;
    puVar8 = (undefined4 *)(pBVar4 + 0x10);
    do {
      iVar5 = (int)uVar7;
      uVar1 = param_3[uVar7 & 0xffffffff];
      *puVar8 = 0;
      *(undefined8 *)((long)puVar8 + -10) = 0xffffffffffff;
      uVar7 = uVar7 + 3;
      uVar2 = param_3[iVar5 + 1];
      *(short *)(puVar8 + -3) = (short)param_3[iVar5 + 2];
      puVar8[-4] = CONCAT22((short)uVar2,(short)uVar1);
      puVar8 = puVar8 + 5;
    } while ((ulong)param_4 * 3 != uVar7);
  }
  this = (Brep *)operator_new(0x2fb8);
                    /* try { // try from 00b77438 to 00b77467 has its CatchHandler @ 00b774a0 */
  Brep::Brep(this,(ushort)param_2,(Vector3 *)param_1,0,(BrepWedge *)0x0,param_4,pBVar4,param_5,
             param_6,(Matrix4x4 *)0x0,(Matrix4x4 *)0x0,(uchar *)0x0);
  if (*(long *)(lVar3 + 0x28) == lVar6) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


