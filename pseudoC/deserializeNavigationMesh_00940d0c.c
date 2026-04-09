// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserializeNavigationMesh
// Entry Point: 00940d0c
// Size: 408 bytes
// Signature: undefined __cdecl deserializeNavigationMesh(basic_string * param_1, uint * param_2, NavigationMesh * * param_3, uint param_4, uchar * param_5)


/* SerializationHelper::deserializeNavigationMesh(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, unsigned int&, NavigationMesh*&,
   unsigned int, unsigned char*) */

void SerializationHelper::deserializeNavigationMesh
               (basic_string *param_1,uint *param_2,NavigationMesh **param_3,uint param_4,
               uchar *param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  NavigationMesh *this;
  ushort *puVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  float *pfVar10;
  float fVar12;
  float fVar13;
  float fVar14;
  ushort local_488 [256];
  ushort auStack_288 [256];
  undefined8 local_88;
  uint local_80;
  undefined8 local_78;
  uint local_70;
  long local_68;
  float *pfVar11;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar3 = *(int *)param_5;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)param_1,(ulong)(param_5 + 4));
  puVar1 = (uint *)(param_5 + 4 + ((ulong)(iVar3 + 3) & 0xfffffffc));
  *param_2 = *puVar1;
  fVar13 = (float)puVar1[1];
  fVar14 = (float)puVar1[2];
  local_78 = *(undefined8 *)(puVar1 + 3);
  local_70 = puVar1[5];
  uVar8 = puVar1[9];
  local_88 = *(undefined8 *)(puVar1 + 6);
  local_80 = puVar1[8];
  uVar2 = puVar1[10];
  uVar9 = puVar1[0xb];
  this = (NavigationMesh *)operator_new(0x68);
                    /* try { // try from 00940da0 to 00940dbf has its CatchHandler @ 00940ea4 */
  NavigationMesh::NavigationMesh
            (this,fVar13,fVar14,(float *)&local_78,(float *)&local_88,uVar8,uVar2,uVar9);
  pfVar11 = (float *)(puVar1 + 0xc);
  *param_3 = this;
  if (uVar8 != 0) {
    fVar13 = (float)puVar1[0xc];
    fVar14 = (float)puVar1[0xd];
    fVar12 = (float)puVar1[0xe];
    pfVar10 = pfVar11;
    while( true ) {
      NavigationMesh::addVertex(this,fVar13,fVar14,fVar12);
      pfVar11 = pfVar10 + 3;
      uVar8 = uVar8 - 1;
      if (uVar8 == 0) break;
      fVar13 = *pfVar11;
      fVar14 = pfVar10[4];
      this = *param_3;
      fVar12 = pfVar10[5];
      pfVar10 = pfVar11;
    }
  }
  if (uVar2 != 0) {
    uVar9 = 0;
    do {
      pfVar10 = pfVar11 + 1;
      fVar13 = *pfVar11;
      if (fVar13 != 0.0) {
        puVar5 = auStack_288;
        uVar7 = (ulong)(uint)fVar13;
        pfVar11 = pfVar10;
        do {
          pfVar10 = (float *)((long)pfVar11 + 2);
          uVar7 = uVar7 - 1;
          *puVar5 = *(ushort *)pfVar11;
          puVar5 = puVar5 + 1;
          pfVar11 = pfVar10;
        } while (uVar7 != 0);
        if (fVar13 != 0.0) {
          lVar6 = 0;
          do {
            *(undefined2 *)((long)local_488 + lVar6) = *(undefined2 *)((long)pfVar10 + lVar6);
            lVar6 = lVar6 + 2;
          } while ((ulong)(uint)fVar13 * 2 - lVar6 != 0);
          pfVar10 = (float *)((long)pfVar10 + lVar6);
        }
      }
      NavigationMesh::addNode(*param_3,(uint)fVar13,auStack_288,local_488,0.0);
      uVar9 = uVar9 + 1;
      pfVar11 = pfVar10;
    } while (uVar9 != uVar2);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


