// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ecc4
// Entry Point: 0079ecc4
// Size: 144 bytes
// Signature: undefined FUN_0079ecc4(void)


undefined8 * FUN_0079ecc4(char **param_1)

{
  long lVar1;
  undefined8 *this;
  
  if ((*(int *)(param_1 + 2) == 0) &&
     (lVar1 = FileManager::get((FileManager *)FileManager::s_singletonFileManager,*param_1,1,false),
     lVar1 != 0)) {
    this = (undefined8 *)operator_new(0x28);
                    /* try { // try from 0079ed18 to 0079ed1f has its CatchHandler @ 0079ed54 */
    Entity::Entity((Entity *)this,*param_1,true);
    this[4] = lVar1;
    *this = &PTR__FileEntity_00fdb8c8;
    this[2] = this[2] | 0x80000000000;
  }
  else {
    this = (undefined8 *)0x0;
  }
  return this;
}


