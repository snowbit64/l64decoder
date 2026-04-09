// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileOrThrow
// Entry Point: 00ecf8e4
// Size: 792 bytes
// Signature: undefined __cdecl compileOrThrow(BytecodeBuilder * param_1, ParseResult * param_2, AstNameTable * param_3, CompileOptions * param_4)


/* Luau::compileOrThrow(Luau::BytecodeBuilder&, Luau::ParseResult const&, Luau::AstNameTable const&,
   Luau::CompileOptions const&) */

void Luau::compileOrThrow
               (BytecodeBuilder *param_1,ParseResult *param_2,AstNameTable *param_3,
               CompileOptions *param_4)

{
  byte *pbVar1;
  long lVar2;
  AstExprFunction **ppAVar3;
  AstExprFunction **ppAVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined **local_3f0;
  Compiler *pCStack_3e8;
  AstExprFunction ***local_3e0;
  AstExprFunction **local_3d8;
  AstExprFunction **local_3d0;
  AstExprFunction **local_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  char **local_3a0;
  optional local_398 [16];
  undefined local_388;
  optional local_380 [24];
  undefined local_368;
  undefined **local_360;
  undefined *puStack_358;
  undefined *local_350;
  Compiler aCStack_298 [128];
  DenseHashMap aDStack_218 [40];
  DenseHashMap aDStack_1f0 [40];
  DenseHashMap aDStack_1c8 [40];
  DenseHashMap aDStack_1a0 [40];
  DenseHashMap aDStack_178 [40];
  DenseHashMap aDStack_150 [40];
  DenseHashMap *local_128;
  undefined uStack_118;
  undefined auStack_117 [175];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pbVar1 = *(byte **)(param_2 + 0x10);
  uStack_3b8 = *(undefined8 *)(param_4 + 8);
  local_3c0 = *(undefined8 *)param_4;
  uStack_3a8 = *(undefined8 *)(param_4 + 0x18);
  uStack_3b0 = *(undefined8 *)(param_4 + 0x10);
  local_3a0 = *(char ***)(param_4 + 0x20);
  if (*(byte **)(param_2 + 8) != pbVar1) {
    pbVar10 = *(byte **)(param_2 + 8) + 0x18;
    do {
      if ((pbVar10[-0x18] != 0) &&
         (iVar5 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  compare((ulong)pbVar10,0,(char *)0x9), iVar5 == 0)) {
        pbVar8 = *(byte **)(pbVar10 + 0x10);
        if ((*pbVar10 & 1) == 0) {
          pbVar8 = pbVar10 + 1;
        }
        uVar6 = atoi((char *)(pbVar8 + 9));
        if (1 < (int)uVar6) {
          uVar6 = 2;
        }
        local_3c0 = CONCAT44(local_3c0._4_4_,uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU));
      }
      pbVar8 = pbVar10 + 0x18;
      pbVar10 = pbVar10 + 0x30;
    } while (pbVar8 != pbVar1);
  }
  puVar9 = *(undefined8 **)param_2;
  Compiler::Compiler(aCStack_298,param_1,(CompileOptions *)&local_3c0);
                    /* try { // try from 00ecf9cc to 00ecfa53 has its CatchHandler @ 00ecfc28 */
  Compile::assignMutable(aDStack_218,param_3,local_3a0);
  Compile::trackValues(aDStack_218,aDStack_1f0,(AstNode *)puVar9);
  if ((int)local_3c0 < 2) {
    if ((int)local_3c0 != 1) goto LAB_00ecfabc;
  }
  else {
    local_128 = aDStack_150;
  }
  Compile::analyzeBuiltins
            (aDStack_150,aDStack_218,aDStack_1f0,(CompileOptions *)&local_3c0,(AstNode *)puVar9);
  Compile::foldConstants(aDStack_1c8,aDStack_1f0,aDStack_1a0,local_128,(AstNode *)puVar9);
  Compile::predictTableShapes(aDStack_178,(AstNode *)puVar9);
                    /* try { // try from 00ecfa60 to 00ecfa6f has its CatchHandler @ 00ecfc0c */
                    /* try { // try from 00ecfa74 to 00ecfa83 has its CatchHandler @ 00ecfbfc */
  if ((0 < (int)local_3c0) &&
     ((lVar7 = AstNameTable::get(param_3,"getfenv"), lVar7 != 0 ||
      (lVar7 = AstNameTable::get(param_3,"setfenv"), lVar7 != 0)))) {
    puStack_358 = &uStack_118;
    local_350 = auStack_117;
    local_360 = &PTR__AstVisitor_01014988;
                    /* try { // try from 00ecfab0 to 00ecfabb has its CatchHandler @ 00ecfc04 */
    (**(code **)*puVar9)(puVar9,&local_360);
  }
LAB_00ecfabc:
  pCStack_3e8 = aCStack_298;
  local_3e0 = &local_3d8;
  local_3d8 = (AstExprFunction **)0x0;
  local_3d0 = (AstExprFunction **)0x0;
  local_3c8 = (AstExprFunction **)0x0;
  local_3f0 = &PTR__AstVisitor_01014b90;
                    /* try { // try from 00ecfae0 to 00ecfae7 has its CatchHandler @ 00ecfc20 */
  local_3d8 = (AstExprFunction **)operator_new(0x80);
  local_3c8 = local_3d8 + 0x10;
                    /* try { // try from 00ecfafc to 00ecfb07 has its CatchHandler @ 00ecfc1c */
  local_3d0 = local_3d8;
  (**(code **)*puVar9)(puVar9,&local_3f0);
  ppAVar4 = local_3d0;
  for (ppAVar3 = local_3d8; ppAVar3 != ppAVar4; ppAVar3 = ppAVar3 + 1) {
                    /* try { // try from 00ecfb18 to 00ecfb1f has its CatchHandler @ 00ecfc30 */
    Compiler::compileFunction(aCStack_298,*ppAVar3);
  }
  local_400 = 0;
  uStack_3f8 = 0;
  local_410 = 0;
  uStack_408 = 0;
  local_420 = 0;
  uStack_418 = 0;
  local_430 = 0;
  uStack_428 = 0;
  local_380[0] = (optional)0x0;
  local_368 = 0;
  local_398[0] = (optional)0x0;
  local_388 = 0;
                    /* try { // try from 00ecfb50 to 00ecfb8f has its CatchHandler @ 00ecfc18 */
  uStack_438 = 0;
  AstExprFunction::AstExprFunction
            ((AstExprFunction *)&local_360,(Location *)((long)puVar9 + 0xc),(AstArray *)&local_400,
             (AstArray *)&local_410,(AstLocal *)0x0,(AstArray *)&local_420,true,
             (Location *)&local_430,(AstStatBlock *)puVar9,0,(AstName *)&uStack_438,local_380,
             (AstTypePack *)0x0,false,local_398);
                    /* try { // try from 00ecfb90 to 00ecfb9f has its CatchHandler @ 00ecfc14 */
  uVar6 = Compiler::compileFunction(aCStack_298,(AstExprFunction *)&local_360);
                    /* try { // try from 00ecfba0 to 00ecfbaf has its CatchHandler @ 00ecfc24 */
  BytecodeBuilder::setMainFunction(param_1,uVar6);
  BytecodeBuilder::finalize();
  if (local_3d8 != (AstExprFunction **)0x0) {
    local_3d0 = local_3d8;
    operator_delete(local_3d8);
  }
  Compiler::~Compiler(aCStack_298);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


