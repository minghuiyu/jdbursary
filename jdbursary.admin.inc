<?php

function reformatVariable ($header, $variable) {
	$array = array();
	$line = $header.PHP_EOL;
	foreach ($variable as $key => $value) {
		$string = implode(',',$value);
		$line .= $key.','.$string.PHP_EOL;
	}
	return $line;
}

function jdbursary_form($form, $form_state) {

    $form = array();
    
       
    $form['jdbursary_msc'] = array(
    		'#type' => 'fieldset',
    		'#title' => t('MSC'),
    		'#collapsible' => TRUE,
    		'#collapsed' => TRUE,
    );
    
    $form['jdbursary_msc']['jdbursary_msc_pre'] = array(
        '#type' => 'textfield',
        '#title' => t('MSC - Pre-study'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msc_pre', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
        '#description' => t('SINGLE STUDENT LIVING AT HOME (DEPENDENT & INDEPENDENT)'),
    );

    $form['jdbursary_msc']['jdbursary_msc_study'] = array(
        '#type' => 'textfield',
        '#title' => t('MSC - Study period'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msc_study', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
        '#description' => t('SPOUSE OF MARRIED STUDENT (NOT APPLYING FOR CSL)'),
    );
    
    $form['jdbursary_msol'] = array(
    		'#type' => 'fieldset',
    		'#title' => t('MSOL'),
    		'#collapsible' => TRUE,
    		'#collapsed' => TRUE,
    );

    $form['jdbursary_msol']['jdbursary_msol_singleaway'] = array(
        '#type' => 'textfield',
        '#title' => t('Single Living Away From Home'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msol_singleaway', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
    );

    $form['jdbursary_msol']['jdbursary_msol_singleathome'] = array(
        '#type' => 'textfield',
        '#title' => t('Single Living At Home'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msol_singleathome', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
    );

    $form['jdbursary_msol']['jdbursary_msol_married'] = array(
        '#type' => 'textfield',
        '#title' => t('Married or Common Law'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msol_married', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
    );

    $form['jdbursary_msol']['jdbursary_msol_singleparent'] = array(
        '#type' => 'textfield',
        '#title' => t('Single Parent'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msol_singleparent', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
    );

    $form['jdbursary_msol']['jdbursary_msol_dependant'] = array(
        '#type' => 'textfield',
        '#title' => t('Dependant'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msol_dependant', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
    );

    $form['jdbursary_income_pre'] = array(
        '#type' => 'fieldset',
        '#title' => t('Pre-study Tax Rate'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
    );

    $form['jdbursary_income_pre']['jdbursary_income_pre_tier1'] = array(
        '#type' => 'textfield',
        '#title' => t('$0 - $1499'),
        '#default_value' => variable_get('jdbursary_income_pre_tier1'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_pre']['jdbursary_income_pre_tier2'] = array(
        '#type' => 'textfield',
        '#title' => t('$1500 - $2999 '),
        '#default_value' => variable_get('jdbursary_income_pre_tier2'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_pre']['jdbursary_income_pre_tier3'] = array(
        '#type' => 'textfield',
        '#title' => t('$3000 - $4499'),
        '#default_value' => variable_get('jdbursary_income_pre_tier3'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_pre']['jdbursary_income_pre_tier4'] = array(
        '#type' => 'textfield',
        '#title' => t('$4,500 - $5999'),
        '#default_value' => variable_get('jdbursary_income_pre_tier4'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_pre']['jdbursary_income_pre_tier5'] = array(
        '#type' => 'textfield',
        '#title' => t('$6000+'),
        '#default_value' => variable_get('jdbursary_income_pre_tier5'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_study'] = array(
        '#type' => 'fieldset',
        '#title' => t('Study Period Tax Rate'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
    );

    $form['jdbursary_income_study']['jdbursary_income_study_tier1'] = array(
        '#type' => 'textfield',
        '#title' => t('$0 - $1499'),
        '#default_value' => variable_get('jdbursary_income_study_tier1'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_study']['jdbursary_income_study_tier2'] = array(
        '#type' => 'textfield',
        '#title' => t('$1500 - $2999'),
        '#default_value' => variable_get('jdbursary_income_study_tier2'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_study']['jdbursary_income_study_tier3'] = array(
        '#type' => 'textfield',
        '#title' => t('$3000 - $4499'),
        '#default_value' => variable_get('jdbursary_income_study_tier3'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_study']['jdbursary_income_study_tier4'] = array(
        '#type' => 'textfield',
        '#title' => t('$4500 - $5999'),
        '#default_value' => variable_get('jdbursary_income_study_tier4'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_study']['jdbursary_income_study_tier5'] = array(
        '#type' => 'textfield',
        '#title' => t('$6000+'),
        '#default_value' => variable_get('jdbursary_income_study_tier5'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );

    $form['jdbursary_income_spouse'] = array(
        '#type' => 'fieldset',
        '#title' => t('Spouse Tax Rate'),
        '#collapsible' => TRUE,
        '#collapsed' => TRUE,
    );
    
    $form['jdbursary_income_spouse']['jdbursary_income_spouse_tier1'] = array(
    		'#type' => 'textfield',
    		'#title' => t('$0 - $1499'),
    		'#default_value' => variable_get('jdbursary_income_spouse_tier1'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_spouse']['jdbursary_income_spouse_tier2'] = array(
    		'#type' => 'textfield',
    		'#title' => t('$1500 - $2999'),
    		'#default_value' => variable_get('jdbursary_income_spouse_tier2'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_spouse']['jdbursary_income_spouse_tier3'] = array(
    		'#type' => 'textfield',
    		'#title' => t('$3000 - $4499'),
    		'#default_value' => variable_get('jdbursary_income_spouse_tier3'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_spouse']['jdbursary_income_spouse_tier4'] = array(
    		'#type' => 'textfield',
    		'#title' => t('$4500 - $5999'),
    		'#default_value' => variable_get('jdbursary_income_spouse_tier4'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_spouse']['jdbursary_income_spouse_tier5'] = array(
    		'#type' => 'textfield',
    		'#title' => t('$6000+'),
    		'#default_value' => variable_get('jdbursary_income_spouse_tier5'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    
    $form['jdbursary_sabcwk'] = array(
    		'#type' => 'fieldset',
    		'#title' => t('sabcwk'),
    		'#collapsible' => TRUE,
    		'#collapsed' => TRUE,
    );
    $form['jdbursary_sabcwk']['jdbursary_sabcwk_y1'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 1'),
    		'#default_value' => variable_get('jdbursary_sabcwk_y1'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_sabcwk']['jdbursary_sabcwk_y2'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 2'),
    		'#default_value' => variable_get('jdbursary_sabcwk_y2'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_sabcwk']['jdbursary_sabcwk_y3'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 3'),
    		'#default_value' => variable_get('jdbursary_sabcwk_y3'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );

    $form['jdbursary_osapwk'] = array(
    		'#type' => 'fieldset',
    		'#title' => t('osapwk'),
    		'#collapsible' => TRUE,
    		'#collapsed' => TRUE,
    );
    $form['jdbursary_osapwk']['jdbursary_osapwk_y1'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 1'),
    		'#default_value' => variable_get('jdbursary_osapwk_y1'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_osapwk']['jdbursary_osapwk_y2'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 2'),
    		'#default_value' => variable_get('jdbursary_osapwk_y2'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_osapwk']['jdbursary_osapwk_y3'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 3'),
    		'#default_value' => variable_get('jdbursary_osapwk_y3'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    
    $form['jdbursary_sabcmon'] = array(
    		'#type' => 'fieldset',
    		'#title' => t('SABCMonths'),
    		'#collapsible' => TRUE,
    		'#collapsed' => TRUE,
    );
    $form['jdbursary_sabcmon']['jdbursary_sabcmon_y1'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 1'),
    		'#default_value' => variable_get('jdbursary_sabcmon_y1'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_sabcmon']['jdbursary_sabcmon_y2'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 2'),
    		'#default_value' => variable_get('jdbursary_sabcmon_y2'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_sabcmon']['jdbursary_sabcmon_y3'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 3'),
    		'#default_value' => variable_get('jdbursary_sabcmon_y3'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    
    
    $form['jdbursary_tuition'] = array(
    		'#type' => 'fieldset',
    		'#title' => t('Tuition fee'),
    		'#collapsible' => TRUE,
    		'#collapsed' => TRUE,
    );
    $form['jdbursary_tuition']['jdbursary_tuition_y1'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 1'),
    		'#default_value' => variable_get('jdbursary_tuition_y1'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_tuition']['jdbursary_tuition_y2'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 2'),
    		'#default_value' => variable_get('jdbursary_tuition_y2'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_tuition']['jdbursary_tuition_y3'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 3'),
    		'#default_value' => variable_get('jdbursary_tuition_y3'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );

    $form['jdbursary_book'] = array(
    		'#type' => 'fieldset',
    		'#title' => t('Book fee'),
    		'#collapsible' => TRUE,
    		'#collapsed' => TRUE,
    );
    $form['jdbursary_book']['jdbursary_book_y1'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 1'),
    		'#default_value' => variable_get('jdbursary_book_y1'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_book']['jdbursary_book_y2'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 2'),
    		'#default_value' => variable_get('jdbursary_book_y2'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_book']['jdbursary_book_y3'] = array(
    		'#type' => 'textfield',
    		'#title' => t('Year 3'),
    		'#default_value' => variable_get('jdbursary_book_y3'),
    		'#description' => t('Use decimal. Do not use percentage.)'),
    		'#element_validate' => array('element_validate_number'),
    );

           
    $form['income_file_preview'] = array(
    		'#type' => 'textarea',
    		'#title' => t('Income file preview'),
    		'#default_value' => reformatVariable('Index,Low Income, Middle Income',variable_get('jdbursary_income')),
    		'#disabled' => true,
    );
    
    $form['income_file'] = array(
    		'#type' => 'file',
    		'#title' => t('Income file'),
    		'#description' => t('Allowed extensions: csv'),
    );
    
    $form['submit_income'] = array
    (
    		'#type' => 'submit',
    		'#value' => t('Upload income file'),
    		'#submit' => array('submit_income_submit'),
    );
    
    
    $form['threshold_file_preview'] = array(
    		'#type' => 'textarea',
    		'#title' => t('Income threshold preview'),
    		'#default_value' => reformatVariable('Size, Threshold, Slope,TBD',variable_get('jdbursary_threshold')),
    		//'#default_value' => pre(variable_get('jdbursary_threshold')),
    		'#disabled' => true,
    );
    
    $form['threshold_file'] = array(
    		'#type' => 'file',
    		'#title' => t('Income threshold file'),
    		'#description' => t('Allowed extensions: csv'),
    );
    
    $form['submit_threshold'] = array
    (
    		'#type' => 'submit',
    		'#value' => t('Upload income threshold file'),
    		'#submit' => array('submit_threshold_submit'),
    );

    $form['funding_file_preview'] = array(
    		'#type' => 'textarea',
    		'#title' => t('Funding file preview'),
    		'#default_value' => reformatVariable('Province,A,B,C,D,No Dependent,Dependent',variable_get('jdbursary_funding')),
    		'#disabled' => true,
    );
    
    $form['funding_file'] = array(
    		'#type' => 'file',
    		'#title' => t('Funding file'),
    		'#description' => t('Allowed extensions: csv'),
    );
        
    
    $form['submit_funding'] = array
    (
    		'#type' => 'submit',
    		'#value' => t('Upload funding file'),
    		'#submit' => array('submit_funding_submit'),
    );
    
    return system_settings_form($form);
}

?>