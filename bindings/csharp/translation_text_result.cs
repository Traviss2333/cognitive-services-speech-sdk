//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//

using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Globalization;
using Microsoft.CognitiveServices.Speech;

namespace Microsoft.CognitiveServices.Speech.Translation
{
    /// <summary>
    /// Defines tranlsation result.
    /// </summary>
    public sealed class TranslationTextResult : SpeechRecognitionResult
    {
        internal TranslationTextResult(Internal.TranslationTextResult result) : base(result)
        {
            Trace.Assert((int)TranslationStatus.Success == (int)Internal.TranslationStatusCode.Success);
            Trace.Assert((int)TranslationStatus.Error == (int)Internal.TranslationStatusCode.Error);

            TranslationStatus = (TranslationStatus)(result.TranslationStatus);
            resultImpl = result;
            translationTextResultMap = new Dictionary<string, string>();
            //Todo: add translation result
            var map = result.Translations;
            foreach (var element in map)
            {
                translationTextResultMap.Add(element.Key, element.Value);
            }
            FailureReason = result.FailureReason;
        }

        /// <summary>
        /// Specifies status of translation text result.
        /// </summary>
        public TranslationStatus TranslationStatus { get; }

        /// <summary>
        /// Presents the translation results. Each item in the dictionary represents translation result in one of target languages, where the key 
        /// is the name of the target language, in BCP-47 format, and the value is the translation text in the specified language.
        /// </summary>
        public IReadOnlyDictionary<string, string> Translations { get { return translationTextResultMap; } }

        /// <summary>
        /// Contains failure reason if TextStatus is Error. Otherwise it is empty.
        /// </summary>
        public string FailureReason { get; }

        /// <summary>
        /// Returns a string that represents the speech recognition result.
        /// </summary>
        /// <returns>A string that represents the speech recognition result.</returns>
        public override string ToString()
        {
            var text = string.Format(CultureInfo.InvariantCulture,
                "ResultId:{0} RecognitionStatus:{1}, TranslationStatus: {2}, Recognized text:<{3}>.\n", 
                ResultId, RecognitionStatus, TranslationStatus, RecognizedText);
            foreach (var element in Translations)
            {
                text += string.Format(CultureInfo.InvariantCulture, "    Translation in {0}: <{1}>.\n", element.Key, element.Value);
            }
            if (TranslationStatus != TranslationStatus.Success)
            {
                text += string.Format(CultureInfo.InvariantCulture, "Failure reason: {0} \n", FailureReason);
            }
            return text;
        }

        // Hold the refernce
        private Internal.TranslationTextResult resultImpl;

        private Dictionary<string, string> translationTextResultMap;
    }
}