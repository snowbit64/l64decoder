// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator!
// Entry Point: 00cf672c
// Size: 80 bytes
// Signature: undefined __thiscall operator!(Integer * this)


/* CryptoPP::Integer::TEMPNAMEPLACEHOLDERVALUE() const */

bool __thiscall CryptoPP::Integer::operator!(Integer *this)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(this + 0x28) == 1) {
    return false;
  }
  if (**(int **)(this + 0x20) != 0) {
    return false;
  }
  lVar1 = *(long *)(this + 0x18);
  do {
    lVar2 = lVar1;
    if (lVar2 == 0) break;
    lVar1 = lVar2 + -1;
  } while ((*(int **)(this + 0x20))[lVar2 + -1] == 0);
  return (int)lVar2 == 0;
}


