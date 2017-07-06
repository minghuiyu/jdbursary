<?php

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
        '#title' => t('MSOL - Single Living Away From Home'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msc_study', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
    );

    $form['jdbursary_msol']['jdbursary_msol_singleaway'] = array(
        '#type' => 'textfield',
        '#title' => t('MSOL - Single Living Away From Home'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msol_singleaway', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
    );

    $form['jdbursary_msol']['jdbursary_msol_singlehome'] = array(
        '#type' => 'textfield',
        '#title' => t('MSOL - Single Living Away From Home'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msol_singlehome', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
    );

    $form['jdbursary_msol']['jdbursary_msol_married'] = array(
        '#type' => 'textfield',
        '#title' => t('MSOL - Single Living At Home'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msol_married', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
    );

    $form['jdbursary_msol']['jdbursary_msol_singleparent'] = array(
        '#type' => 'textfield',
        '#title' => t('MSOL - Married or Common Law'),
        '#size' => 3,
        '#maxlength' => 4,
        '#default_value' => variable_get('jdbursary_msol_singleparent', 0),
        '#element_validate' => array('element_validate_number','element_validate_integer_positive'),
    );

    $form['jdbursary_msol']['jdbursary_msol_dependant'] = array(
        '#type' => 'textfield',
        '#title' => t('MSOL - Dependant'),
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
        '#title' => t('$0.00'),
        '#default_value' => variable_get('jdbursary_income_pre_tier1'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_pre']['jdbursary_income_pre_tier2'] = array(
        '#type' => 'textfield',
        '#title' => t('$1,500.00'),
        '#default_value' => variable_get('jdbursary_income_pre_tier2'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_pre']['jdbursary_income_pre_tier3'] = array(
        '#type' => 'textfield',
        '#title' => t('$3000'),
        '#default_value' => variable_get('jdbursary_income_pre_tier3'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_pre']['jdbursary_income_pre_tier4'] = array(
        '#type' => 'textfield',
        '#title' => t('$4,500'),
        '#default_value' => variable_get('jdbursary_income_pre_tier4'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_pre']['jdbursary_income_pre_tier5'] = array(
        '#type' => 'textfield',
        '#title' => t('$6000'),
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
        '#title' => t('$0.00'),
        '#default_value' => variable_get('jdbursary_income_study_tier1'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_study']['jdbursary_income_study_tier2'] = array(
        '#type' => 'textfield',
        '#title' => t('$1,500.00'),
        '#default_value' => variable_get('jdbursary_income_study_tier2'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_study']['jdbursary_income_study_tier3'] = array(
        '#type' => 'textfield',
        '#title' => t('$3000'),
        '#default_value' => variable_get('jdbursary_income_study_tier3'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_study']['jdbursary_income_study_tier4'] = array(
        '#type' => 'textfield',
        '#title' => t('$4,500'),
        '#default_value' => variable_get('jdbursary_income_study_tier4'),
        '#description' => t('Use decimal. Do not use percentage.)'),
        '#element_validate' => array('element_validate_number'),
    );
    $form['jdbursary_income_study']['jdbursary_income_study_tier5'] = array(
        '#type' => 'textfield',
        '#title' => t('$6000'),
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
    return system_settings_form($form);
}

?>