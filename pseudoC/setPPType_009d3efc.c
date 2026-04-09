// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setPPType
// Entry Point: 009d3efc
// Size: 740 bytes
// Signature: undefined __thiscall setPPType(ProceduralPlacementManager * this, ProceduralPlacementObjectDesc * param_1)


/* ProceduralPlacementManager::setPPType(ProceduralPlacementRule::ProceduralPlacementObjectDesc*) */

void __thiscall
ProceduralPlacementManager::setPPType
          (ProceduralPlacementManager *this,ProceduralPlacementObjectDesc *param_1)

{
  size_t sVar1;
  ProceduralPlacementObjectDesc *pPVar2;
  long lVar3;
  byte bVar4;
  ProceduralPlacementObjectDesc PVar5;
  size_t sVar6;
  long lVar7;
  ProceduralPlacementObjectDesc *pPVar8;
  size_t sVar9;
  int iVar10;
  basic_string *pbVar11;
  ProceduralPlacementObjectDesc *pPVar12;
  ulong uVar13;
  long lVar14;
  byte *pbVar15;
  
  iVar10 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
  if (iVar10 == 0) {
    lVar3 = *(long *)(this + 8);
    lVar7 = *(long *)(this + 0x10) - lVar3;
    if (lVar7 != 0) {
      PVar5 = param_1[0x48];
      uVar13 = 0;
      sVar1 = (ulong)((byte)PVar5 >> 1);
      if (((byte)PVar5 & 1) != 0) {
        sVar1 = *(size_t *)(param_1 + 0x50);
      }
      do {
        pbVar15 = *(byte **)(lVar3 + uVar13 * 8);
        bVar4 = *pbVar15;
        sVar6 = (ulong)(bVar4 >> 1);
        if ((bVar4 & 1) != 0) {
          sVar6 = *(size_t *)(pbVar15 + 8);
        }
        if (sVar1 == sVar6) {
          pPVar12 = *(ProceduralPlacementObjectDesc **)(pbVar15 + 0x10);
          pPVar2 = param_1 + 0x49;
          if (((byte)PVar5 & 1) != 0) {
            pPVar2 = *(ProceduralPlacementObjectDesc **)(param_1 + 0x58);
          }
          if ((bVar4 & 1) == 0) {
            pPVar12 = (ProceduralPlacementObjectDesc *)(pbVar15 + 1);
          }
          pPVar8 = param_1 + 0x49;
          sVar6 = (ulong)((byte)PVar5 >> 1);
          sVar9 = sVar1;
          if (((byte)PVar5 & 1) == 0) {
            while( true ) {
              if (sVar9 == 0) goto LAB_009d40d4;
              if (*pPVar8 != *pPVar12) break;
              sVar6 = sVar6 - 1;
              pPVar12 = pPVar12 + 1;
              pPVar8 = pPVar8 + 1;
              sVar9 = sVar6;
            }
          }
          else if ((sVar1 == 0) || (iVar10 = memcmp(pPVar2,pPVar12,sVar1), iVar10 == 0)) {
LAB_009d40d4:
            pbVar11 = (basic_string *)(pbVar15 + 0x18);
            goto LAB_009d41bc;
          }
        }
        uVar13 = (ulong)((int)uVar13 + 1);
      } while (uVar13 < (ulong)(lVar7 >> 3));
    }
  }
  else {
    iVar10 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    if (iVar10 == 1) {
      lVar3 = *(long *)(this + 0x20);
      lVar7 = *(long *)(this + 0x28) - lVar3;
      if (lVar7 != 0) {
        PVar5 = param_1[0x78];
        uVar13 = 0;
        sVar1 = (ulong)((byte)PVar5 >> 1);
        if (((byte)PVar5 & 1) != 0) {
          sVar1 = *(size_t *)(param_1 + 0x80);
        }
        do {
          lVar14 = *(long *)(lVar3 + uVar13 * 8);
          bVar4 = *(byte *)(lVar14 + 0x18);
          sVar6 = (ulong)(bVar4 >> 1);
          if ((bVar4 & 1) != 0) {
            sVar6 = *(size_t *)(lVar14 + 0x20);
          }
          if (sVar1 == sVar6) {
            pPVar12 = *(ProceduralPlacementObjectDesc **)(lVar14 + 0x28);
            pPVar2 = param_1 + 0x79;
            if (((byte)PVar5 & 1) != 0) {
              pPVar2 = *(ProceduralPlacementObjectDesc **)(param_1 + 0x88);
            }
            if ((bVar4 & 1) == 0) {
              pPVar12 = (ProceduralPlacementObjectDesc *)(lVar14 + 0x19);
            }
            pPVar8 = param_1 + 0x79;
            sVar6 = (ulong)((byte)PVar5 >> 1);
            sVar9 = sVar1;
            if (((byte)PVar5 & 1) == 0) {
              while (sVar9 != 0) {
                if (*pPVar8 != *pPVar12) goto LAB_009d3f8c;
                pPVar12 = pPVar12 + 1;
                sVar6 = sVar6 - 1;
                pPVar8 = pPVar8 + 1;
                sVar9 = sVar6;
              }
            }
            else if ((sVar1 != 0) && (iVar10 = memcmp(pPVar2,pPVar12,sVar1), iVar10 != 0))
            goto LAB_009d3f8c;
            if (*(int *)(param_1 + 0x90) == *(int *)(lVar14 + 0x30)) {
              pbVar11 = (basic_string *)(lVar14 + 0x38);
LAB_009d41bc:
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)(param_1 + 0x10),pbVar11);
              return;
            }
          }
LAB_009d3f8c:
          uVar13 = (ulong)((int)uVar13 + 1);
        } while (uVar13 < (ulong)(lVar7 >> 3));
      }
    }
    else {
      iVar10 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
      if (iVar10 == 2) {
        lVar3 = *(long *)(this + 0x38);
        lVar7 = *(long *)(this + 0x40) - lVar3;
        if (lVar7 != 0) {
          PVar5 = param_1[0x78];
          uVar13 = 0;
          sVar1 = (ulong)((byte)PVar5 >> 1);
          if (((byte)PVar5 & 1) != 0) {
            sVar1 = *(size_t *)(param_1 + 0x80);
          }
          do {
            lVar14 = *(long *)(lVar3 + uVar13 * 8);
            bVar4 = *(byte *)(lVar14 + 0x18);
            sVar6 = (ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              sVar6 = *(size_t *)(lVar14 + 0x20);
            }
            if (sVar1 == sVar6) {
              pPVar12 = *(ProceduralPlacementObjectDesc **)(lVar14 + 0x28);
              pPVar2 = param_1 + 0x79;
              if (((byte)PVar5 & 1) != 0) {
                pPVar2 = *(ProceduralPlacementObjectDesc **)(param_1 + 0x88);
              }
              if ((bVar4 & 1) == 0) {
                pPVar12 = (ProceduralPlacementObjectDesc *)(lVar14 + 0x19);
              }
              pPVar8 = param_1 + 0x79;
              sVar6 = (ulong)((byte)PVar5 >> 1);
              sVar9 = sVar1;
              if (((byte)PVar5 & 1) == 0) {
                while( true ) {
                  if (sVar9 == 0) goto LAB_009d41b0;
                  if (*pPVar8 != *pPVar12) break;
                  sVar6 = sVar6 - 1;
                  pPVar12 = pPVar12 + 1;
                  pPVar8 = pPVar8 + 1;
                  sVar9 = sVar6;
                }
              }
              else if ((sVar1 == 0) || (iVar10 = memcmp(pPVar2,pPVar12,sVar1), iVar10 == 0)) {
LAB_009d41b0:
                pbVar11 = (basic_string *)(lVar14 + 0x30);
                goto LAB_009d41bc;
              }
            }
            uVar13 = (ulong)((int)uVar13 + 1);
          } while (uVar13 < (ulong)(lVar7 >> 3));
        }
      }
    }
  }
  return;
}


