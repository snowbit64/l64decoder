// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: initUnionFind
// Entry Point: 00f5648c
// Size: 8 bytes
// Signature: undefined __thiscall initUnionFind(btSimulationIslandManager * this, int param_1)


/* btSimulationIslandManager::initUnionFind(int) */

void __thiscall
btSimulationIslandManager::initUnionFind(btSimulationIslandManager *this,int param_1)

{
  btUnionFind::reset((btUnionFind *)(this + 8),param_1);
  return;
}


