// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007937e4
// Entry Point: 007937e4
// Size: 184 bytes
// Signature: undefined FUN_007937e4(void)


void FUN_007937e4(char **param_1)

{
  long *this;
  size_t sVar1;
  ulong uVar2;
  undefined4 uVar3;
  char *__s;
  
  this = (long *)operator_new(0xf8);
                    /* try { // try from 00793808 to 0079380f has its CatchHandler @ 007938ac */
  Entity::Entity((Entity *)this,*param_1,true);
  *this = (long)&PTR__DomXMLFileEntity_00fdb840;
                    /* try { // try from 00793824 to 0079382b has its CatchHandler @ 0079389c */
  DomXMLFile::DomXMLFile((DomXMLFile *)(this + 4));
  __s = param_1[2];
  this[2] = this[2] | 0x400000000000;
  sVar1 = strlen(__s);
  uVar2 = DomXMLFile::loadFromMemory((DomXMLFile *)(this + 4),__s,(uint)sVar1,*param_1,true,false);
  if ((uVar2 & 1) == 0) {
    (**(code **)(*this + 8))(this);
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(this + 3);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar3;
  *(undefined4 *)(param_1 + 0x21) = 1;
  return;
}


