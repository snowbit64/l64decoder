// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateFromTetGenData
// Entry Point: 00f916f4
// Size: 1252 bytes
// Signature: undefined __cdecl CreateFromTetGenData(btSoftBodyWorldInfo * param_1, char * param_2, char * param_3, char * param_4, bool param_5, bool param_6, bool param_7)


/* btSoftBodyHelpers::CreateFromTetGenData(btSoftBodyWorldInfo&, char const*, char const*, char
   const*, bool, bool, bool) */

btSoftBody *
btSoftBodyHelpers::CreateFromTetGenData
          (btSoftBodyWorldInfo *param_1,char *param_2,char *param_3,char *param_4,bool param_5,
          bool param_6,bool param_7)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  long lVar4;
  uint uVar5;
  btVector3 *pbVar6;
  btSoftBody *this;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  char *pcVar14;
  uint uVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_88 = 0;
  uStack_80 = 0;
  sscanf(param_4,"%d %d %d %d",(long)&uStack_80 + 4,&uStack_80,(long)&local_88 + 4,&local_88,
         (ulong)param_7);
  sscanf(param_4,"%d %d %d %d",(long)&uStack_80 + 4,&uStack_80,(long)&local_88 + 4,&local_88);
  if (*param_4 == '\n') {
    lVar8 = 1;
  }
  else {
    lVar8 = 1;
    do {
      pcVar14 = param_4 + lVar8;
      lVar8 = lVar8 + 1;
    } while (*pcVar14 != '\n');
    lVar8 = (long)(int)lVar8;
  }
  uVar5 = uStack_80._4_4_;
  if ((int)uStack_80._4_4_ < 1) {
    pbVar6 = (btVector3 *)0x0;
  }
  else {
    pcVar14 = param_4 + lVar8;
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    pbVar6 = (btVector3 *)(*(code *)PTR_FUN_01048e38)((ulong)uStack_80._4_4_ << 4,0x10);
    uVar15 = 0;
    do {
      local_78 = 0;
      sscanf(pcVar14,"%d %f %f %f",&local_78,&local_8c,&local_90,&local_94);
      if (*pcVar14 == '\n') {
        lVar8 = 1;
      }
      else {
        lVar8 = 1;
        do {
          pcVar1 = pcVar14 + lVar8;
          lVar8 = lVar8 + 1;
        } while (*pcVar1 != '\n');
      }
      pcVar14 = pcVar14 + (int)lVar8;
      uVar15 = uVar15 + 1;
      piVar2 = (int *)(pbVar6 + (long)local_78 * 0x10);
      *piVar2 = local_8c;
      piVar2[1] = local_90;
      piVar2[2] = local_94;
    } while (uVar15 != uVar5);
  }
  gNumAlignedAllocs = gNumAlignedAllocs + 1;
  this = (btSoftBody *)(*(code *)PTR_FUN_01048e38)(0x690,0x10);
  btSoftBody::btSoftBody(this,param_1,uStack_80._4_4_,pbVar6,(float *)0x0);
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    local_8c = 0;
    local_94 = 0;
    local_90 = 0;
    sscanf(param_2,"%d %d %d",&local_8c,&local_90,&local_94);
    lVar8 = 1;
    if (*param_2 != '\n') {
      do {
        pcVar14 = param_2 + lVar8;
        lVar8 = lVar8 + 1;
      } while (*pcVar14 != '\n');
      lVar8 = (long)(int)lVar8;
    }
    if (0 < local_8c) {
      iVar16 = 0;
      pcVar14 = param_2 + lVar8;
      do {
        local_98 = 0;
        sscanf(pcVar14,"%d %d %d %d %d",&local_98,&local_78,&local_74,&local_70,&local_6c);
        lVar8 = 1;
        cVar3 = *pcVar14;
        while (cVar3 != '\n') {
          pcVar1 = pcVar14 + lVar8;
          lVar8 = lVar8 + 1;
          cVar3 = *pcVar1;
        }
        lVar9 = (long)local_78;
        lVar11 = (long)local_70;
        lVar12 = (long)local_70;
        lVar13 = (long)(int)local_68;
        btSoftBody::appendTetra(this,-1,(Material *)0x0);
        lVar10 = *(long *)(this + 0x380) + lVar9 * 0x78;
        lVar9 = *(long *)(this + 0x3e0) + (long)*(int *)(this + 0x3d4) * 0x88;
        *(long *)(lVar9 + -0x78) = lVar10;
        lVar11 = *(long *)(this + 0x380) + lVar11 * 0x78;
        *(long *)(lVar9 + -0x70) = lVar11;
        lVar12 = *(long *)(this + 0x380) + lVar12 * 0x78;
        *(long *)(lVar9 + -0x68) = lVar12;
        lVar13 = *(long *)(this + 0x380) + lVar13 * 0x78;
        *(long *)(lVar9 + -0x60) = lVar13;
        fVar17 = *(float *)(lVar10 + 0x10);
        fVar18 = *(float *)(lVar10 + 0x14);
        fVar19 = *(float *)(lVar10 + 0x18);
        fVar24 = *(float *)(lVar12 + 0x14) - fVar18;
        fVar22 = *(float *)(lVar12 + 0x10) - fVar17;
        fVar25 = *(float *)(lVar13 + 0x10) - fVar17;
        fVar27 = *(float *)(lVar13 + 0x14) - fVar18;
        fVar26 = *(float *)(lVar12 + 0x18) - fVar19;
        fVar20 = *(float *)(lVar13 + 0x18) - fVar19;
        fVar28 = (float)NEON_fnmsub(fVar27,fVar22,fVar25 * fVar24);
        uVar21 = NEON_fnmsub(fVar20,fVar24,fVar27 * fVar26);
        uVar23 = NEON_fnmsub(fVar25,fVar26,fVar20 * fVar22);
        uVar21 = NEON_fmadd(uVar21,*(float *)(lVar11 + 0x10) - fVar17,
                            fVar28 * (*(float *)(lVar11 + 0x18) - fVar19));
        uVar21 = NEON_fmadd(uVar23,*(float *)(lVar11 + 0x14) - fVar18,uVar21);
        *(undefined4 *)(lVar9 + -0x58) = uVar21;
        this[0x4b4] = (btSoftBody)0x1;
        if (param_6) {
          btSoftBody::appendLink
                    (this,(Node *)(*(long *)(this + 0x380) + (long)local_78 * 0x78),
                     (Node *)(*(long *)(this + 0x380) + (long)local_70 * 0x78),(Material *)0x0,true)
          ;
          btSoftBody::appendLink
                    (this,(Node *)(*(long *)(this + 0x380) + (long)local_74 * 0x78),
                     (Node *)(*(long *)(this + 0x380) + (long)local_6c * 0x78),(Material *)0x0,true)
          ;
          btSoftBody::appendLink
                    (this,(Node *)(*(long *)(this + 0x380) + (long)local_70 * 0x78),
                     (Node *)(*(long *)(this + 0x380) + (long)local_78 * 0x78),(Material *)0x0,true)
          ;
          btSoftBody::appendLink
                    (this,(Node *)(*(long *)(this + 0x380) + (long)local_78 * 0x78),
                     (Node *)(*(long *)(this + 0x380) + (long)local_6c * 0x78),(Material *)0x0,true)
          ;
          btSoftBody::appendLink
                    (this,(Node *)(*(long *)(this + 0x380) + (long)local_74 * 0x78),
                     (Node *)(*(long *)(this + 0x380) + (long)local_6c * 0x78),(Material *)0x0,true)
          ;
          btSoftBody::appendLink
                    (this,(Node *)(*(long *)(this + 0x380) + (long)local_70 * 0x78),
                     (Node *)(*(long *)(this + 0x380) + (long)(int)local_68 * 0x78),(Material *)0x0,
                     true);
        }
        pcVar14 = pcVar14 + (int)lVar8;
        iVar16 = iVar16 + 1;
      } while (iVar16 < local_8c);
    }
  }
  printf("Nodes:  %u\r\n",(ulong)*(uint *)(this + 0x374));
  printf("Links:  %u\r\n",(ulong)*(uint *)(this + 0x394));
  printf("Faces:  %u\r\n",(ulong)*(uint *)(this + 0x3b4));
  uVar5 = printf("Tetras: %u\r\n",(ulong)*(uint *)(this + 0x3d4));
  uVar7 = (ulong)uVar5;
  if (pbVar6 != (btVector3 *)0x0) {
    gNumAlignedFree = gNumAlignedFree + 1;
    uVar7 = (*(code *)PTR_FUN_01048e40)(pbVar6);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar7);
}


