// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setAutoUpdateState
// Entry Point: 0074908c
// Size: 84 bytes
// Signature: undefined __thiscall setAutoUpdateState(CharacterSet * this, bool param_1)


/* CharacterSet::setAutoUpdateState(bool) */

void __thiscall CharacterSet::setAutoUpdateState(CharacterSet *this,bool param_1)

{
  CharacterSet CVar1;
  UpdateManager *this_00;
  
  CVar1 = this[0xe8];
  if (CVar1 != (CharacterSet)param_1) {
    this_00 = (UpdateManager *)UpdateManager::getInstance();
    if (CVar1 == (CharacterSet)0x0) {
      UpdateManager::addUpdateable(this_00,(Updateable *)(this + 0x30),false);
    }
    else {
      UpdateManager::removeUpdateable(this_00,(Updateable *)(this + 0x30));
    }
  }
  this[0xe8] = (CharacterSet)param_1;
  return;
}


