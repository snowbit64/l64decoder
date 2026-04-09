// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator()
// Entry Point: 00ab93fc
// Size: 480 bytes
// Signature: undefined __thiscall operator()(VertexDeclarationDescComparer * this, VertexDeclarationDesc * param_1, VertexDeclarationDesc * param_2)


/* ComparerUtil::VertexDeclarationDescComparer::TEMPNAMEPLACEHOLDERVALUE(VertexDeclarationDesc
   const&, VertexDeclarationDesc const&) const */

bool __thiscall
ComparerUtil::VertexDeclarationDescComparer::operator()
          (VertexDeclarationDescComparer *this,VertexDeclarationDesc *param_1,
          VertexDeclarationDesc *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = *(uint *)param_2 <= *(uint *)param_1;
  if (*(uint *)param_1 != *(uint *)param_2) {
LAB_00ab95d4:
    return !bVar1;
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(param_2 + 4);
  if (iVar2 == iVar4) {
    iVar2 = *(int *)(param_1 + 8);
    iVar4 = *(int *)(param_2 + 8);
    if (iVar2 == iVar4) {
      iVar2 = *(int *)(param_1 + 0xc);
      iVar4 = *(int *)(param_2 + 0xc);
      if (iVar2 == iVar4) {
        iVar2 = *(int *)(param_1 + 0x10);
        iVar4 = *(int *)(param_2 + 0x10);
        if (iVar2 == iVar4) {
          iVar2 = *(int *)(param_1 + 0x14);
          iVar4 = *(int *)(param_2 + 0x14);
          if (iVar2 == iVar4) {
            iVar2 = *(int *)(param_1 + 0x18);
            iVar4 = *(int *)(param_2 + 0x18);
            if (iVar2 == iVar4) {
              uVar3 = *(uint *)(param_1 + 0x44);
              uVar5 = *(uint *)(param_2 + 0x44);
              if (uVar3 == uVar5) {
                iVar2 = *(int *)(param_1 + 0x1c);
                iVar4 = *(int *)(param_2 + 0x1c);
                if (iVar2 != iVar4) goto LAB_00ab95c4;
                uVar3 = *(uint *)(param_1 + 0x48);
                uVar5 = *(uint *)(param_2 + 0x48);
                if (uVar3 == uVar5) {
                  iVar2 = *(int *)(param_1 + 0x20);
                  iVar4 = *(int *)(param_2 + 0x20);
                  if (iVar2 != iVar4) goto LAB_00ab95c4;
                  uVar3 = *(uint *)(param_1 + 0x4c);
                  uVar5 = *(uint *)(param_2 + 0x4c);
                  if (uVar3 == uVar5) {
                    iVar2 = *(int *)(param_1 + 0x24);
                    iVar4 = *(int *)(param_2 + 0x24);
                    if (iVar2 != iVar4) goto LAB_00ab95c4;
                    uVar3 = *(uint *)(param_1 + 0x50);
                    uVar5 = *(uint *)(param_2 + 0x50);
                    if (uVar3 == uVar5) {
                      iVar2 = *(int *)(param_1 + 0x28);
                      iVar4 = *(int *)(param_2 + 0x28);
                      if (iVar2 != iVar4) goto LAB_00ab95c4;
                      uVar3 = *(uint *)(param_1 + 0x54);
                      uVar5 = *(uint *)(param_2 + 0x54);
                      if (uVar3 == uVar5) {
                        iVar2 = *(int *)(param_1 + 0x2c);
                        iVar4 = *(int *)(param_2 + 0x2c);
                        if (iVar2 != iVar4) goto LAB_00ab95c4;
                        uVar3 = *(uint *)(param_1 + 0x58);
                        uVar5 = *(uint *)(param_2 + 0x58);
                        if (uVar3 == uVar5) {
                          iVar2 = *(int *)(param_1 + 0x30);
                          iVar4 = *(int *)(param_2 + 0x30);
                          if (iVar2 != iVar4) goto LAB_00ab95c4;
                          uVar3 = *(uint *)(param_1 + 0x5c);
                          uVar5 = *(uint *)(param_2 + 0x5c);
                          if (uVar3 == uVar5) {
                            iVar2 = *(int *)(param_1 + 0x34);
                            iVar4 = *(int *)(param_2 + 0x34);
                            if (iVar2 != iVar4) goto LAB_00ab95c4;
                            uVar3 = *(uint *)(param_1 + 0x60);
                            uVar5 = *(uint *)(param_2 + 0x60);
                            if (uVar3 == uVar5) {
                              iVar2 = *(int *)(param_1 + 0x38);
                              iVar4 = *(int *)(param_2 + 0x38);
                              if (iVar2 != iVar4) goto LAB_00ab95c4;
                              uVar3 = *(uint *)(param_1 + 100);
                              uVar5 = *(uint *)(param_2 + 100);
                              if (uVar3 == uVar5) {
                                iVar2 = *(int *)(param_1 + 0x3c);
                                iVar4 = *(int *)(param_2 + 0x3c);
                                if (iVar2 != iVar4) goto LAB_00ab95c4;
                                uVar3 = *(uint *)(param_1 + 0x68);
                                uVar5 = *(uint *)(param_2 + 0x68);
                                if (uVar3 == uVar5) {
                                  iVar2 = *(int *)(param_1 + 0x40);
                                  iVar4 = *(int *)(param_2 + 0x40);
                                  if (iVar2 != iVar4) goto LAB_00ab95c4;
                                  uVar3 = *(uint *)(param_1 + 0x6c);
                                  uVar5 = *(uint *)(param_2 + 0x6c);
                                  if (uVar3 == uVar5) {
                                    return false;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              bVar1 = uVar5 <= uVar3;
              goto LAB_00ab95d4;
            }
          }
        }
      }
    }
  }
LAB_00ab95c4:
  return iVar2 < iVar4;
}


