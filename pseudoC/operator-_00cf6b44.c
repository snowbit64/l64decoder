// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator-
// Entry Point: 00cf6b44
// Size: 116 bytes
// Signature: undefined __thiscall operator-(Integer * this)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall CryptoPP::Integer::operator-(Integer *this)

{
  long lVar1;
  Integer *in_x8;
  long lVar2;
  long lVar3;
  
  Integer(in_x8,this);
  if ((*(int *)(in_x8 + 0x28) != 1) && (**(int **)(in_x8 + 0x20) == 0)) {
    lVar2 = *(long *)(in_x8 + 0x18);
    do {
      if (lVar2 == 0) {
        return;
      }
      lVar3 = lVar2 + -1;
      lVar1 = lVar2 + -1;
      lVar2 = lVar3;
    } while ((*(int **)(in_x8 + 0x20))[lVar1] == 0);
    if ((int)lVar3 == -1) {
      return;
    }
  }
  *(int *)(in_x8 + 0x28) = 1 - *(int *)(in_x8 + 0x28);
  return;
}


