// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lexicographical_less
// Entry Point: 00921cac
// Size: 1168 bytes
// Signature: undefined __thiscall lexicographical_less(MaterialDesc * this, MaterialDesc * param_1)


/* MaterialDesc::lexicographical_less(MaterialDesc const&) const */

uint __thiscall MaterialDesc::lexicographical_less(MaterialDesc *this,MaterialDesc *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  float *pfVar12;
  ulong uVar13;
  ulong uVar14;
  long *plVar15;
  long *plVar16;
  
  uVar6 = strcasecmp(*(char **)(this + 8),*(char **)(param_1 + 8));
  if (uVar6 != 0) {
LAB_00921cdc:
    return uVar6 >> 0x1f;
  }
  lVar11 = *(long *)(this + 0x18);
  lVar9 = *(long *)(param_1 + 0x18);
  if (lVar11 != lVar9) {
    if (lVar11 == 0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)(lVar11 + 0x31);
      if ((*(byte *)(lVar11 + 0x30) & 1) != 0) {
        pcVar7 = *(char **)(lVar11 + 0x40);
      }
    }
    if (lVar9 == 0) {
      uVar6 = strcasecmp(pcVar7,"");
    }
    else {
      pcVar8 = (char *)(lVar9 + 0x31);
      if ((*(byte *)(lVar9 + 0x30) & 1) != 0) {
        pcVar8 = *(char **)(lVar9 + 0x40);
      }
      uVar6 = strcasecmp(pcVar7,pcVar8);
    }
    if (uVar6 != 0) goto LAB_00921cdc;
  }
  lVar11 = *(long *)(this + 0x20);
  lVar9 = *(long *)(param_1 + 0x20);
  if (lVar11 != lVar9) {
    if (lVar11 == 0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)(lVar11 + 0x31);
      if ((*(byte *)(lVar11 + 0x30) & 1) != 0) {
        pcVar7 = *(char **)(lVar11 + 0x40);
      }
    }
    if (lVar9 == 0) {
      uVar6 = strcasecmp(pcVar7,"");
    }
    else {
      pcVar8 = (char *)(lVar9 + 0x31);
      if ((*(byte *)(lVar9 + 0x30) & 1) != 0) {
        pcVar8 = *(char **)(lVar9 + 0x40);
      }
      uVar6 = strcasecmp(pcVar7,pcVar8);
    }
    if (uVar6 != 0) goto LAB_00921cdc;
  }
  lVar11 = *(long *)(this + 0x28);
  lVar9 = *(long *)(param_1 + 0x28);
  if (lVar11 != lVar9) {
    if (lVar11 == 0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)(lVar11 + 0x31);
      if ((*(byte *)(lVar11 + 0x30) & 1) != 0) {
        pcVar7 = *(char **)(lVar11 + 0x40);
      }
    }
    if (lVar9 == 0) {
      uVar6 = strcasecmp(pcVar7,"");
    }
    else {
      pcVar8 = (char *)(lVar9 + 0x31);
      if ((*(byte *)(lVar9 + 0x30) & 1) != 0) {
        pcVar8 = *(char **)(lVar9 + 0x40);
      }
      uVar6 = strcasecmp(pcVar7,pcVar8);
    }
    if (uVar6 != 0) goto LAB_00921cdc;
  }
  lVar11 = *(long *)(this + 0x30);
  lVar9 = *(long *)(param_1 + 0x30);
  if (lVar11 != lVar9) {
    if (lVar11 == 0) {
      pcVar7 = "";
    }
    else {
      pcVar7 = (char *)(lVar11 + 0x31);
      if ((*(byte *)(lVar11 + 0x30) & 1) != 0) {
        pcVar7 = *(char **)(lVar11 + 0x40);
      }
    }
    if (lVar9 == 0) {
      uVar6 = strcasecmp(pcVar7,"");
    }
    else {
      pcVar8 = (char *)(lVar9 + 0x31);
      if ((*(byte *)(lVar9 + 0x30) & 1) != 0) {
        pcVar8 = *(char **)(lVar9 + 0x40);
      }
      uVar6 = strcasecmp(pcVar7,pcVar8);
    }
    if (uVar6 != 0) goto LAB_00921cdc;
  }
  bVar5 = *(float *)(this + 0x38) < *(float *)(param_1 + 0x38);
  if (*(float *)(this + 0x38) == *(float *)(param_1 + 0x38)) {
    bVar5 = *(uint *)(param_1 + 0x3c) <= *(uint *)(this + 0x3c);
    if ((*(uint *)(this + 0x3c) == *(uint *)(param_1 + 0x3c)) &&
       (bVar5 = *(uint *)(param_1 + 0x40) <= *(uint *)(this + 0x40),
       *(uint *)(this + 0x40) == *(uint *)(param_1 + 0x40))) {
      bVar5 = *(float *)(this + 0x48) < *(float *)(param_1 + 0x48);
      if ((*(float *)(this + 0x48) != *(float *)(param_1 + 0x48)) ||
         (((bVar5 = *(float *)(this + 0x44) < *(float *)(param_1 + 0x44),
           *(float *)(this + 0x44) != *(float *)(param_1 + 0x44) ||
           (bVar5 = *(float *)(this + 0x4c) < *(float *)(param_1 + 0x4c),
           *(float *)(this + 0x4c) != *(float *)(param_1 + 0x4c))) ||
          (bVar5 = *(float *)(this + 0x50) < *(float *)(param_1 + 0x50),
          *(float *)(this + 0x50) != *(float *)(param_1 + 0x50))))) goto LAB_00921ce0;
      bVar5 = (byte)param_1[0x54] <= (byte)this[0x54];
      if (this[0x54] == param_1[0x54]) {
        bVar5 = *(float *)(this + 0x58) < *(float *)(param_1 + 0x58);
        if (((*(float *)(this + 0x58) != *(float *)(param_1 + 0x58)) ||
            (bVar5 = *(float *)(this + 0x5c) < *(float *)(param_1 + 0x5c),
            *(float *)(this + 0x5c) != *(float *)(param_1 + 0x5c))) ||
           (bVar5 = *(float *)(this + 0x60) < *(float *)(param_1 + 0x60),
           *(float *)(this + 0x60) != *(float *)(param_1 + 0x60))) goto LAB_00921ce0;
        bVar5 = (byte)param_1[100] <= (byte)this[100];
        if (((this[100] == param_1[100]) &&
            (bVar5 = (byte)param_1[0x65] <= (byte)this[0x65], this[0x65] == param_1[0x65])) &&
           (bVar5 = (byte)param_1[0x66] <= (byte)this[0x66], this[0x66] == param_1[0x66])) {
          lVar11 = *(long *)(this + 0x68);
          lVar9 = *(long *)(param_1 + 0x68);
          if (lVar11 != lVar9) {
            if (lVar11 == 0) {
              pcVar7 = "";
            }
            else {
              pcVar7 = (char *)(lVar11 + 0x11);
              if ((*(byte *)(lVar11 + 0x10) & 1) != 0) {
                pcVar7 = *(char **)(lVar11 + 0x20);
              }
            }
            if (lVar9 == 0) {
              pcVar8 = "";
            }
            else {
              pcVar8 = (char *)(lVar9 + 0x11);
              if ((*(byte *)(lVar9 + 0x10) & 1) != 0) {
                pcVar8 = *(char **)(lVar9 + 0x20);
              }
            }
            uVar6 = strcasecmp(pcVar7,pcVar8);
            if (uVar6 != 0) goto LAB_00921cdc;
          }
          if (lVar11 == 0) {
LAB_00922118:
            iVar3 = *(int *)(this + 0x240);
            iVar4 = *(int *)(param_1 + 0x240);
            bVar5 = SBORROW4(iVar3,iVar4);
            iVar1 = iVar3 - iVar4;
            if (iVar3 == iVar4) {
              bVar5 = SBORROW4(*(int *)(this + 0x14),*(int *)(param_1 + 0x14));
              iVar1 = *(int *)(this + 0x14) - *(int *)(param_1 + 0x14);
            }
            return (uint)(iVar1 < 0 != bVar5);
          }
          bVar5 = *(uint *)(param_1 + 0x70) <= *(uint *)(this + 0x70);
          if (*(uint *)(this + 0x70) == *(uint *)(param_1 + 0x70)) {
            uVar6 = *(uint *)(this + 0x74);
            uVar14 = (ulong)uVar6;
            if (uVar6 != *(uint *)(param_1 + 0x74)) {
              return (uint)(uVar6 < *(uint *)(param_1 + 0x74));
            }
            uVar2 = *(uint *)(this + 0x78);
            uVar13 = (ulong)uVar2;
            if (uVar2 != *(uint *)(param_1 + 0x78)) {
              return (uint)(uVar2 < *(uint *)(param_1 + 0x78));
            }
            if (uVar6 != 0) {
              plVar15 = (long *)(this + 0x80);
              plVar16 = (long *)(param_1 + 0x80);
              do {
                lVar11 = *plVar15;
                lVar9 = *plVar16;
                if (lVar11 != lVar9) {
                  pcVar7 = "";
                  if (lVar11 != 0) {
                    pcVar7 = (char *)(lVar11 + 0x31);
                    if ((*(byte *)(lVar11 + 0x30) & 1) != 0) {
                      pcVar7 = *(char **)(lVar11 + 0x40);
                    }
                  }
                  if (lVar9 == 0) {
                    uVar6 = strcasecmp(pcVar7,"");
                  }
                  else {
                    pcVar8 = (char *)(lVar9 + 0x31);
                    if ((*(byte *)(lVar9 + 0x30) & 1) != 0) {
                      pcVar8 = *(char **)(lVar9 + 0x40);
                    }
                    uVar6 = strcasecmp(pcVar7,pcVar8);
                  }
                  if (uVar6 != 0) goto LAB_00921cdc;
                }
                plVar15 = plVar15 + 1;
                plVar16 = plVar16 + 1;
                uVar14 = uVar14 - 1;
              } while (uVar14 != 0);
            }
            if (uVar2 != 0) {
              pfVar10 = (float *)(param_1 + 0x10c);
              pfVar12 = (float *)(this + 0x10c);
              do {
                bVar5 = pfVar12[-3] < pfVar10[-3];
                if ((((pfVar12[-3] != pfVar10[-3]) ||
                     (bVar5 = pfVar12[-2] < pfVar10[-2], pfVar12[-2] != pfVar10[-2])) ||
                    (bVar5 = pfVar12[-1] < pfVar10[-1], pfVar12[-1] != pfVar10[-1])) ||
                   (bVar5 = *pfVar12 < *pfVar10, *pfVar12 != *pfVar10)) goto LAB_00921ce0;
                uVar13 = uVar13 - 1;
                pfVar10 = pfVar10 + 4;
                pfVar12 = pfVar12 + 4;
              } while (uVar13 != 0);
            }
            goto LAB_00922118;
          }
        }
      }
    }
    bVar5 = !bVar5;
  }
LAB_00921ce0:
  return (uint)bVar5;
}


