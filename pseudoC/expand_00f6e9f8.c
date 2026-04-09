// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: expand
// Entry Point: 00f6e9f8
// Size: 484 bytes
// Signature: undefined __thiscall expand(EPA * this, uint param_1, sSV * param_2, sFace * param_3, uint param_4, sHorizon * param_5)


/* gjkepa2_impl::EPA::expand(unsigned int, gjkepa2_impl::GJK::sSV*, gjkepa2_impl::EPA::sFace*,
   unsigned int, gjkepa2_impl::EPA::sHorizon&) */

undefined8 __thiscall
gjkepa2_impl::EPA::expand
          (EPA *this,uint param_1,sSV *param_2,sFace *param_3,uint param_4,sHorizon *param_5)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  float fVar8;
  
  if ((byte)param_3[0x5b] == param_1) {
LAB_00f6ea1c:
    uVar2 = 0;
  }
  else {
    uVar7 = (ulong)param_4;
    fVar8 = (float)NEON_fmadd(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)param_3,
                              (float)*(undefined8 *)(param_2 + 0x14) *
                              (float)*(undefined8 *)(param_3 + 4));
    uVar4 = (ulong)*(uint *)(expand(unsigned_int,gjkepa2_impl::GJK::sSV*,gjkepa2_impl::EPA::sFace*,unsigned_int,gjkepa2_impl::EPA::sHorizon&)
                             ::i1m3 + (ulong)param_4 * 4);
    if (-1e-05 <= (fVar8 + (float)((ulong)*(undefined8 *)(param_2 + 0x14) >> 0x20) *
                           (float)((ulong)*(undefined8 *)(param_3 + 4) >> 0x20)) -
                  *(float *)(param_3 + 0x10)) {
      param_3[0x5b] = SUB41(param_1,0);
      uVar4 = expand(this,param_1,param_2,*(sFace **)(param_3 + uVar4 * 8 + 0x30),
                     (uint)(byte)param_3[uVar4 + 0x58],param_5);
      if (((uVar4 & 1) == 0) ||
         (uVar4 = expand(this,param_1,param_2,
                         *(sFace **)
                          (param_3 +
                          (ulong)*(uint *)(expand(unsigned_int,gjkepa2_impl::GJK::sSV*,gjkepa2_impl::EPA::sFace*,unsigned_int,gjkepa2_impl::EPA::sHorizon&)
                                           ::i2m3 + uVar7 * 4) * 8 + 0x30),
                         (uint)(byte)param_3[(ulong)*(uint *)(
                                                  expand(unsigned_int,gjkepa2_impl::GJK::sSV*,gjkepa2_impl::EPA::sFace*,unsigned_int,gjkepa2_impl::EPA::sHorizon&)
                                                  ::i2m3 + uVar7 * 4) + 0x58],param_5),
         (uVar4 & 1) == 0)) goto LAB_00f6ea1c;
      if (*(long *)(param_3 + 0x50) != 0) {
        *(undefined8 *)(*(long *)(param_3 + 0x50) + 0x48) = *(undefined8 *)(param_3 + 0x48);
      }
      if (*(long *)(param_3 + 0x48) != 0) {
        *(undefined8 *)(*(long *)(param_3 + 0x48) + 0x50) = *(undefined8 *)(param_3 + 0x50);
      }
      if (*(sFace **)(this + 0x7060) == param_3) {
        *(undefined8 *)(this + 0x7060) = *(undefined8 *)(param_3 + 0x50);
      }
      *(undefined8 *)(param_3 + 0x48) = 0;
      iVar1 = *(int *)(this + 0x7068);
      *(undefined8 *)(param_3 + 0x50) = *(undefined8 *)(this + 0x7070);
      *(int *)(this + 0x7068) = iVar1 + -1;
      if (*(long *)(this + 0x7070) != 0) {
        *(sFace **)(*(long *)(this + 0x7070) + 0x48) = param_3;
      }
      piVar6 = (int *)(this + 0x7078);
      *(sFace **)(this + 0x7070) = param_3;
    }
    else {
      lVar3 = newface(this,*(sSV **)(param_3 + uVar4 * 8 + 0x18),
                      *(sSV **)(param_3 + uVar7 * 8 + 0x18),param_2,false);
      if (lVar3 == 0) {
        return 0;
      }
      *(char *)(lVar3 + 0x58) = (char)param_4;
      *(sFace **)(lVar3 + 0x30) = param_3;
      param_3[uVar7 + 0x58] = (sFace)0x0;
      *(long *)(param_3 + uVar7 * 8 + 0x30) = lVar3;
      lVar5 = *(long *)param_5;
      if (lVar5 == 0) {
        *(long *)(param_5 + 8) = lVar3;
      }
      else {
        *(long *)(lVar5 + 0x38) = lVar3;
        *(undefined *)(lVar5 + 0x59) = 2;
        *(undefined *)(lVar3 + 0x5a) = 1;
        *(long *)(lVar3 + 0x40) = lVar5;
      }
      piVar6 = (int *)(param_5 + 0x10);
      *(long *)param_5 = lVar3;
    }
    uVar2 = 1;
    *piVar6 = *piVar6 + 1;
  }
  return uVar2;
}


