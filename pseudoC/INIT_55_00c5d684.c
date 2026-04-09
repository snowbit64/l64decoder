// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: _INIT_55
// Entry Point: 00c5d684
// Size: 988 bytes
// Signature: undefined _INIT_55(void)


void _INIT_55(void)

{
  char **ppcVar1;
  
  LanguageUtil::s_iso2CodeStrsArray = (char **)0x0;
  DAT_0211f308 = (char **)0x0;
  DAT_0211f310 = (char **)0x0;
  LanguageUtil::s_iso2CodeStrsArray = (char **)operator_new(8);
  DAT_0211f320 = (char **)0x0;
  DAT_0211f328 = (char **)0x0;
  DAT_0211f318 = (char **)0x0;
  DAT_0211f308 = LanguageUtil::s_iso2CodeStrsArray + 1;
  *LanguageUtil::s_iso2CodeStrsArray = "en-US";
  DAT_0211f310 = DAT_0211f308;
                    /* try { // try from 00c5d6c8 to 00c5d6cf has its CatchHandler @ 00c5db68 */
  DAT_0211f318 = (char **)operator_new(8);
  DAT_0211f338 = (char **)0x0;
  DAT_0211f340 = (char **)0x0;
  DAT_0211f330 = (char **)0x0;
  DAT_0211f320 = DAT_0211f318 + 1;
  *DAT_0211f318 = "de-DE";
  DAT_0211f328 = DAT_0211f320;
                    /* try { // try from 00c5d6ec to 00c5d6f3 has its CatchHandler @ 00c5db5c */
  DAT_0211f330 = (char **)operator_new(8);
  DAT_0211f350 = (char **)0x0;
  DAT_0211f358 = (char **)0x0;
  DAT_0211f348 = (char **)0x0;
  DAT_0211f338 = DAT_0211f330 + 1;
  *DAT_0211f330 = "ja-JP";
  DAT_0211f340 = DAT_0211f338;
                    /* try { // try from 00c5d710 to 00c5d717 has its CatchHandler @ 00c5db50 */
  DAT_0211f348 = (char **)operator_new(8);
  DAT_0211f368 = (char **)0x0;
  DAT_0211f370 = (char **)0x0;
  DAT_0211f360 = (char **)0x0;
  DAT_0211f350 = DAT_0211f348 + 1;
  *DAT_0211f348 = "pl-PL";
  DAT_0211f358 = DAT_0211f350;
                    /* try { // try from 00c5d734 to 00c5d73b has its CatchHandler @ 00c5db44 */
  DAT_0211f360 = (char **)operator_new(8);
  DAT_0211f380 = (char **)0x0;
  DAT_0211f388 = (char **)0x0;
  DAT_0211f378 = (char **)0x0;
  DAT_0211f368 = DAT_0211f360 + 1;
  *DAT_0211f360 = "cs-CZ";
  DAT_0211f370 = DAT_0211f368;
                    /* try { // try from 00c5d758 to 00c5d75f has its CatchHandler @ 00c5db38 */
  ppcVar1 = (char **)operator_new(0x18);
  DAT_0211f380 = ppcVar1 + 3;
  DAT_0211f398 = (char **)0x0;
  DAT_0211f3a0 = (char **)0x0;
  DAT_0211f390 = (char **)0x0;
  DAT_0211f378 = ppcVar1;
  DAT_0211f388 = DAT_0211f380;
  ppcVar1[1] = "fr-BE";
  *ppcVar1 = "fr-FR";
  ppcVar1[2] = "fr-CH";
                    /* try { // try from 00c5d788 to 00c5d78f has its CatchHandler @ 00c5db2c */
  DAT_0211f390 = (char **)operator_new(8);
  DAT_0211f3b0 = (char **)0x0;
  DAT_0211f3b8 = (char **)0x0;
  DAT_0211f3a8 = (char **)0x0;
  DAT_0211f398 = DAT_0211f390 + 1;
  *DAT_0211f390 = "es-ES";
  DAT_0211f3a0 = DAT_0211f398;
                    /* try { // try from 00c5d7ac to 00c5d7b3 has its CatchHandler @ 00c5db20 */
  DAT_0211f3a8 = (char **)operator_new(8);
  DAT_0211f3c8 = (char **)0x0;
  DAT_0211f3d0 = (char **)0x0;
  DAT_0211f3c0 = (char **)0x0;
  DAT_0211f3b0 = DAT_0211f3a8 + 1;
  *DAT_0211f3a8 = "ru-RU";
  DAT_0211f3b8 = DAT_0211f3b0;
                    /* try { // try from 00c5d7d0 to 00c5d7d7 has its CatchHandler @ 00c5db14 */
  DAT_0211f3c0 = (char **)operator_new(8);
  DAT_0211f3e0 = (char **)0x0;
  DAT_0211f3e8 = (char **)0x0;
  DAT_0211f3d8 = (char **)0x0;
  DAT_0211f3c8 = DAT_0211f3c0 + 1;
  *DAT_0211f3c0 = "it-IT";
  DAT_0211f3d0 = DAT_0211f3c8;
                    /* try { // try from 00c5d7f4 to 00c5d7fb has its CatchHandler @ 00c5db08 */
  DAT_0211f3d8 = (char **)operator_new(8);
  DAT_0211f3f8 = (char **)0x0;
  DAT_0211f400 = (char **)0x0;
  DAT_0211f3f0 = (char **)0x0;
  DAT_0211f3e0 = DAT_0211f3d8 + 1;
  *DAT_0211f3d8 = "pt-PT";
  DAT_0211f3e8 = DAT_0211f3e0;
                    /* try { // try from 00c5d818 to 00c5d81f has its CatchHandler @ 00c5dafc */
  DAT_0211f3f0 = (char **)operator_new(8);
  DAT_0211f410 = (char **)0x0;
  DAT_0211f418 = (char **)0x0;
  DAT_0211f408 = (char **)0x0;
  DAT_0211f3f8 = DAT_0211f3f0 + 1;
  *DAT_0211f3f0 = "hu-HU";
  DAT_0211f400 = DAT_0211f3f8;
                    /* try { // try from 00c5d83c to 00c5d843 has its CatchHandler @ 00c5daf0 */
  DAT_0211f408 = (char **)operator_new(8);
  DAT_0211f428 = (char **)0x0;
  DAT_0211f430 = (char **)0x0;
  DAT_0211f420 = (char **)0x0;
  DAT_0211f410 = DAT_0211f408 + 1;
  *DAT_0211f408 = "nl-NL";
  DAT_0211f418 = DAT_0211f410;
                    /* try { // try from 00c5d860 to 00c5d867 has its CatchHandler @ 00c5dae4 */
  DAT_0211f420 = (char **)operator_new(0x10);
  DAT_0211f428 = DAT_0211f420 + 2;
  DAT_0211f440 = (char **)0x0;
  DAT_0211f448 = (char **)0x0;
  *DAT_0211f420 = "zh-CN";
  DAT_0211f420[1] = "zh-SG";
  DAT_0211f438 = (char **)0x0;
  DAT_0211f430 = DAT_0211f428;
                    /* try { // try from 00c5d88c to 00c5d893 has its CatchHandler @ 00c5dad8 */
  DAT_0211f438 = (char **)operator_new(0x10);
  DAT_0211f440 = DAT_0211f438 + 2;
  DAT_0211f458 = (char **)0x0;
  DAT_0211f460 = (char **)0x0;
  *DAT_0211f438 = "zh-TW";
  DAT_0211f438[1] = "zh-HK";
  DAT_0211f450 = (char **)0x0;
  DAT_0211f448 = DAT_0211f440;
                    /* try { // try from 00c5d8b8 to 00c5d8bf has its CatchHandler @ 00c5dacc */
  DAT_0211f450 = (char **)operator_new(8);
  DAT_0211f470 = (char **)0x0;
  DAT_0211f478 = (char **)0x0;
  DAT_0211f468 = (char **)0x0;
  DAT_0211f458 = DAT_0211f450 + 1;
  *DAT_0211f450 = "pt-BR";
  DAT_0211f460 = DAT_0211f458;
                    /* try { // try from 00c5d8dc to 00c5d8e3 has its CatchHandler @ 00c5dac0 */
  DAT_0211f468 = (char **)operator_new(8);
  DAT_0211f488 = (char **)0x0;
  DAT_0211f490 = (char **)0x0;
  DAT_0211f480 = (char **)0x0;
  DAT_0211f470 = DAT_0211f468 + 1;
  *DAT_0211f468 = "tr-TR";
  DAT_0211f478 = DAT_0211f470;
                    /* try { // try from 00c5d900 to 00c5d907 has its CatchHandler @ 00c5dab4 */
  DAT_0211f480 = (char **)operator_new(8);
  DAT_0211f4a0 = (char **)0x0;
  DAT_0211f4a8 = (char **)0x0;
  DAT_0211f498 = (char **)0x0;
  DAT_0211f488 = DAT_0211f480 + 1;
  *DAT_0211f480 = "ro-RO";
  DAT_0211f490 = DAT_0211f488;
                    /* try { // try from 00c5d924 to 00c5d92b has its CatchHandler @ 00c5daa8 */
  DAT_0211f498 = (char **)operator_new(8);
  DAT_0211f4b8 = (char **)0x0;
  DAT_0211f4c0 = (char **)0x0;
  DAT_0211f4b0 = (char **)0x0;
  DAT_0211f4a0 = DAT_0211f498 + 1;
  *DAT_0211f498 = "ko-KR";
  DAT_0211f4a8 = DAT_0211f4a0;
                    /* try { // try from 00c5d948 to 00c5d94f has its CatchHandler @ 00c5da9c */
  ppcVar1 = (char **)operator_new(0x28);
  DAT_0211f4b8 = ppcVar1 + 5;
  DAT_0211f4d0 = (char **)0x0;
  DAT_0211f4d8 = (char **)0x0;
  DAT_0211f4c8 = (char **)0x0;
  DAT_0211f4b0 = ppcVar1;
  DAT_0211f4c0 = DAT_0211f4b8;
  ppcVar1[1] = "es-CO";
  *ppcVar1 = "es-MX";
  ppcVar1[3] = "es-CL";
  ppcVar1[2] = "es-AR";
  ppcVar1[4] = "es-US";
                    /* try { // try from 00c5d978 to 00c5d97f has its CatchHandler @ 00c5da90 */
  DAT_0211f4c8 = (char **)operator_new(8);
  DAT_0211f4e8 = (char **)0x0;
  DAT_0211f4f0 = (char **)0x0;
  DAT_0211f4e0 = (char **)0x0;
  DAT_0211f4d0 = DAT_0211f4c8 + 1;
  *DAT_0211f4c8 = "da-DK";
  DAT_0211f4d8 = DAT_0211f4d0;
                    /* try { // try from 00c5d99c to 00c5d9a3 has its CatchHandler @ 00c5da84 */
  DAT_0211f4e0 = (char **)operator_new(8);
  DAT_0211f508 = (char **)0x0;
  DAT_0211f4f8 = (char **)0x0;
  DAT_0211f500 = (char **)0x0;
  DAT_0211f4e8 = DAT_0211f4e0 + 1;
  *DAT_0211f4e0 = "fi-FI";
  DAT_0211f4f0 = DAT_0211f4e8;
                    /* try { // try from 00c5d9c0 to 00c5d9c7 has its CatchHandler @ 00c5da78 */
  DAT_0211f4f8 = (char **)operator_new(8);
  DAT_0211f510 = (char **)0x0;
  DAT_0211f520 = (char **)0x0;
  DAT_0211f518 = (char **)0x0;
  DAT_0211f500 = DAT_0211f4f8 + 1;
  *DAT_0211f4f8 = "no-NO";
  DAT_0211f508 = DAT_0211f500;
                    /* try { // try from 00c5d9ec to 00c5d9f3 has its CatchHandler @ 00c5da6c */
  DAT_0211f510 = (char **)operator_new(8);
  DAT_0211f528 = (char **)0x0;
  DAT_0211f538 = (char **)0x0;
  DAT_0211f530 = (char **)0x0;
  DAT_0211f518 = DAT_0211f510 + 1;
  *DAT_0211f510 = "sv-SE";
  DAT_0211f520 = DAT_0211f518;
                    /* try { // try from 00c5da18 to 00c5da1f has its CatchHandler @ 00c5da60 */
  DAT_0211f528 = (char **)operator_new(8);
  DAT_0211f530 = DAT_0211f528 + 1;
  *DAT_0211f528 = "fr-CA";
  DAT_0211f538 = DAT_0211f530;
  __cxa_atexit(FUN_00c5d63c,0,&PTR_LOOP_00fd8de0);
  return;
}


