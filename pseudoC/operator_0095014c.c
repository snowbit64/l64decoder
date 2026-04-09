// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator<
// Entry Point: 0095014c
// Size: 568 bytes
// Signature: undefined __thiscall operator<(MaterialDesc * this, MaterialDesc * param_1)


/* MaterialDesc::TEMPNAMEPLACEHOLDERVALUE(MaterialDesc const&) const */

bool __thiscall MaterialDesc::operator<(MaterialDesc *this,MaterialDesc *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  float *pfVar9;
  ulong *puVar10;
  float *pfVar11;
  ulong *puVar12;
  
  bVar6 = *(ulong *)(param_1 + 0x18) <= *(ulong *)(this + 0x18);
  if ((((*(ulong *)(this + 0x18) == *(ulong *)(param_1 + 0x18)) &&
       (bVar6 = *(ulong *)(param_1 + 0x20) <= *(ulong *)(this + 0x20),
       *(ulong *)(this + 0x20) == *(ulong *)(param_1 + 0x20))) &&
      (bVar6 = *(ulong *)(param_1 + 0x28) <= *(ulong *)(this + 0x28),
      *(ulong *)(this + 0x28) == *(ulong *)(param_1 + 0x28))) &&
     (bVar6 = *(ulong *)(param_1 + 0x30) <= *(ulong *)(this + 0x30),
     *(ulong *)(this + 0x30) == *(ulong *)(param_1 + 0x30))) {
    if (*(float *)(this + 0x38) != *(float *)(param_1 + 0x38)) {
      return *(float *)(this + 0x38) < *(float *)(param_1 + 0x38);
    }
    bVar6 = *(uint *)(param_1 + 0x3c) <= *(uint *)(this + 0x3c);
    if ((*(uint *)(this + 0x3c) == *(uint *)(param_1 + 0x3c)) &&
       (bVar6 = *(uint *)(param_1 + 0x40) <= *(uint *)(this + 0x40),
       *(uint *)(this + 0x40) == *(uint *)(param_1 + 0x40))) {
      if (*(float *)(this + 0x48) != *(float *)(param_1 + 0x48)) {
        return *(float *)(this + 0x48) < *(float *)(param_1 + 0x48);
      }
      if (*(float *)(this + 0x44) != *(float *)(param_1 + 0x44)) {
        return *(float *)(this + 0x44) < *(float *)(param_1 + 0x44);
      }
      if (*(float *)(this + 0x4c) != *(float *)(param_1 + 0x4c)) {
        return *(float *)(this + 0x4c) < *(float *)(param_1 + 0x4c);
      }
      if (*(float *)(this + 0x50) != *(float *)(param_1 + 0x50)) {
        return *(float *)(this + 0x50) < *(float *)(param_1 + 0x50);
      }
      bVar6 = (byte)param_1[0x54] <= (byte)this[0x54];
      if (this[0x54] == param_1[0x54]) {
        if (*(float *)(this + 0x58) != *(float *)(param_1 + 0x58)) {
          return *(float *)(this + 0x58) < *(float *)(param_1 + 0x58);
        }
        if (*(float *)(this + 0x5c) != *(float *)(param_1 + 0x5c)) {
          return *(float *)(this + 0x5c) < *(float *)(param_1 + 0x5c);
        }
        if (*(float *)(this + 0x60) != *(float *)(param_1 + 0x60)) {
          return *(float *)(this + 0x60) < *(float *)(param_1 + 0x60);
        }
        bVar6 = (byte)param_1[100] <= (byte)this[100];
        if (((this[100] == param_1[100]) &&
            (bVar6 = (byte)param_1[0x65] <= (byte)this[0x65], this[0x65] == param_1[0x65])) &&
           (bVar6 = (byte)param_1[0x66] <= (byte)this[0x66], this[0x66] == param_1[0x66])) {
          uVar7 = *(ulong *)(this + 0x68);
          bVar6 = *(ulong *)(param_1 + 0x68) <= uVar7;
          if (uVar7 == *(ulong *)(param_1 + 0x68)) {
            if (uVar7 != 0) {
              bVar6 = *(uint *)(param_1 + 0x70) <= *(uint *)(this + 0x70);
              if (*(uint *)(this + 0x70) != *(uint *)(param_1 + 0x70)) goto LAB_0095015c;
              uVar2 = *(uint *)(this + 0x74);
              uVar7 = (ulong)uVar2;
              if (uVar2 != *(uint *)(param_1 + 0x74)) {
                return uVar2 < *(uint *)(param_1 + 0x74);
              }
              uVar3 = *(uint *)(this + 0x78);
              uVar8 = (ulong)uVar3;
              if (uVar3 != *(uint *)(param_1 + 0x78)) {
                return uVar3 < *(uint *)(param_1 + 0x78);
              }
              if (uVar2 != 0) {
                puVar10 = (ulong *)(this + 0x80);
                puVar12 = (ulong *)(param_1 + 0x80);
                do {
                  bVar6 = *puVar12 <= *puVar10;
                  if (*puVar10 != *puVar12) goto LAB_0095015c;
                  puVar10 = puVar10 + 1;
                  puVar12 = puVar12 + 1;
                  uVar7 = uVar7 - 1;
                } while (uVar7 != 0);
              }
              if (uVar3 != 0) {
                pfVar9 = (float *)(param_1 + 0x10c);
                pfVar11 = (float *)(this + 0x10c);
                do {
                  if (pfVar11[-3] != pfVar9[-3]) {
                    return pfVar11[-3] < pfVar9[-3];
                  }
                  if (pfVar11[-2] != pfVar9[-2]) {
                    return pfVar11[-2] < pfVar9[-2];
                  }
                  if (pfVar11[-1] != pfVar9[-1]) {
                    return pfVar11[-1] < pfVar9[-1];
                  }
                  if (*pfVar11 != *pfVar9) {
                    return *pfVar11 < *pfVar9;
                  }
                  uVar8 = uVar8 - 1;
                  pfVar9 = pfVar9 + 4;
                  pfVar11 = pfVar11 + 4;
                } while (uVar8 != 0);
              }
            }
            iVar4 = *(int *)(this + 0x240);
            iVar5 = *(int *)(param_1 + 0x240);
            bVar6 = SBORROW4(iVar4,iVar5);
            iVar1 = iVar4 - iVar5;
            if (iVar4 == iVar5) {
              bVar6 = SBORROW4(*(int *)(this + 0x14),*(int *)(param_1 + 0x14));
              iVar1 = *(int *)(this + 0x14) - *(int *)(param_1 + 0x14);
            }
            return iVar1 < 0 != bVar6;
          }
        }
      }
    }
  }
LAB_0095015c:
  return !bVar6;
}


